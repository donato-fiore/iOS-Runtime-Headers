// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLPRFLOCALAPPLICATIONLIBRARY_H
#define CSLPRFLOCALAPPLICATIONLIBRARY_H

@class NSMutableDictionary, NSArray, NSDictionary, NSString;
@protocol LSApplicationWorkspaceObserverProtocol, CSLPRFApplicationLibrary;

#import <Foundation/Foundation.h>

#import "CSLPRFObservationHelper.h"

@interface CSLPRFLocalApplicationLibrary : NSObject <LSApplicationWorkspaceObserverProtocol, CSLPRFApplicationLibrary>

 {
    CSLPRFObservationHelper *_observationHelper;
    NSMutableDictionary *_lock_cachedApplications;
    os_unfair_lock_s _lock;
    BOOL _lock_observing;
}


@property (readonly, nonatomic) NSArray *allApplications;
@property (readonly, nonatomic) NSDictionary *allApplicationsDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)applicationWithBundleIdentifier:(id)arg0 ;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)allApplicationsWithCompletion:(id)arg0 ;
-(void)applicationInstallsDidStart:(id)arg0 ;
-(void)applicationWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif