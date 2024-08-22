// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTAPPLICATIONWORKSPACEOBSERVER_H
#define MTAPPLICATIONWORKSPACEOBSERVER_H

@class LSApplicationWorkspace, NSString, NSMutableDictionary;
@protocol LSApplicationWorkspaceObserverProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MTApplicationWorkspaceObserver : NSObject <LSApplicationWorkspaceObserverProtocol>



@property (retain, nonatomic) LSApplicationWorkspace *applicationWorkspace; // ivar: _applicationWorkspace
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // ivar: _observerQueue
@property (retain, nonatomic) NSMutableDictionary *observersForBundleID; // ivar: _observersForBundleID
@property (nonatomic, getter=isObserving) BOOL observing; // ivar: _observing
@property (readonly) Class superclass;


+(id)sharedWorkspaceObserver;
-(BOOL)isApplicationInstalledForBundleIdentifier:(id)arg0 ;
-(BOOL)isApplicationInstalledForBundleIdentifier:(id)arg0 allowPlaceholder:(BOOL)arg1 ;
-(id)init;
-(void)addObserver:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif