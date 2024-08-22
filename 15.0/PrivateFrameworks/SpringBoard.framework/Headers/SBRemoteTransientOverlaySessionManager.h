// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBREMOTETRANSIENTOVERLAYSESSIONMANAGER_H
#define SBREMOTETRANSIENTOVERLAYSESSIONMANAGER_H

@class NSMutableDictionary, NSString;
@protocol SBRemoteTransientOverlaySessionHostDelegate, OS_dispatch_queue, SBRemoteTransientOverlaySessionManagerDelegate;

#import <Foundation/Foundation.h>


@interface SBRemoteTransientOverlaySessionManager : NSObject <SBRemoteTransientOverlaySessionHostDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSMutableDictionary *_sessionIDToSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBRemoteTransientOverlaySessionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasSessionWithPendingButtonEvents:(NSUInteger)arg0 options:(NSInteger)arg1 ;
-(BOOL)hasSessionWithServiceProcessIdentifier:(int)arg0 options:(NSInteger)arg1 ;
-(BOOL)remoteTransientOverlaySession:(id)arg0 performDismissalRequest:(id)arg1 ;
-(BOOL)remoteTransientOverlaySession:(id)arg0 performPresentationRequest:(id)arg1 ;
-(BOOL)remoteTransientOverlaySession:(id)arg0 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)arg1 ;
-(BOOL)remoteTransientOverlaySession:(id)arg0 shouldActivateWithContext:(id)arg1 ;
-(NSInteger)activeWallpaperVariantForRemoteTransientOverlaySession:(id)arg0 ;
-(id)_createSessionWithDefinition:(id)arg0 ;
-(id)_existingSessionsWithDefinition:(id)arg0 options:(NSInteger)arg1 ;
-(id)createSessionWithDefinition:(id)arg0 ;
-(id)existingSessionWithSessionID:(id)arg0 options:(NSInteger)arg1 ;
-(id)existingSessionsWithDefinition:(id)arg0 options:(NSInteger)arg1 ;
-(id)init;
-(id)sessionWithDefinition:(id)arg0 options:(NSInteger)arg1 ;
-(id)sessionsWithDefinition:(id)arg0 options:(NSInteger)arg1 ;
-(void)remoteTransientOverlaySession:(id)arg0 didInvalidateWithReason:(NSInteger)arg1 error:(id)arg2 ;
-(void)remoteTransientOverlaySession:(id)arg0 requestsHandlingForButtonEvents:(NSUInteger)arg1 viewController:(id)arg2 ;


@end


#endif