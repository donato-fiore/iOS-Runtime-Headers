// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPLICATIONLIBRARYOBSERVER_H
#define SBAPPLICATIONLIBRARYOBSERVER_H

@class XBApplicationController, FBSApplicationLibrary, NSMutableSet, NSMutableDictionary, NSHashTable, NSString, NSArray;
@protocol MCProfileConnectionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBApplicationLibraryObserver : NSObject <MCProfileConnectionObserver>

 {
    XBApplicationController *_splashBoardController;
    FBSApplicationLibrary *_appLibrary;
    NSMutableSet *_suspendCalloutsAssertionReasons;
    NSObject<OS_dispatch_queue> *_mainQueueProxy;
    NSMutableDictionary *_placeholdersByBundleID;
    NSHashTable *_applicationObservers;
    NSHashTable *_placeholderObservers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *placeholders;
@property (readonly) Class superclass;


+(id)new;
-(id)_appBundleIDsForApplications:(id)arg0 ;
-(id)init;
-(id)initWithAppLibrary:(id)arg0 splashBoardController:(id)arg1 ;
-(id)suspendCalloutsAssertionWithReason:(id)arg0 ;
-(void)_addObserver:(id)arg0 table:(id)arg1 ;
-(void)_didAddApplications:(id)arg0 ;
-(void)_didAddPlaceholders:(id)arg0 ;
-(void)_didCancelPlaceholders:(id)arg0 ;
-(void)_didChangeNetworkUsage:(BOOL)arg0 ;
-(void)_didDemoteApplications:(id)arg0 ;
-(void)_didRemoveApplications:(id)arg0 ;
-(void)_didReplaceApplications:(id)arg0 ;
-(void)_didUpdateApplications:(id)arg0 ;
-(void)_removeObserver:(id)arg0 table:(id)arg1 ;
-(void)_waitForLaunchImageGenerationForApplications:(id)arg0 ;
-(void)addApplicationLifecycleObserver:(id)arg0 ;
-(void)addPlaceholderLifecycleObserver:(id)arg0 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)removeApplicationLifecycleObserver:(id)arg0 ;
-(void)removePlaceholderLifecycleObserver:(id)arg0 ;


@end


#endif