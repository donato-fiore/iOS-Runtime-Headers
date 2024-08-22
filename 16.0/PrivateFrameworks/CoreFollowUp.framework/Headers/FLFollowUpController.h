// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLFOLLOWUPCONTROLLER_H
#define FLFOLLOWUPCONTROLLER_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, FLFollowUpControllerDelegate;

#import <Foundation/Foundation.h>


@interface FLFollowUpController : NSObject <NSXPCListenerDelegate>

 {
    NSString *_clientIdentifier;
    NSString *_machServiceName;
    NSXPCListener *_listener;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FLFollowUpControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)clearNotificationForItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)clearPendingFollowUpItems:(*id)arg0 ;
-(BOOL)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg0 error:(*id)arg1 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)postFollowUpItem:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)countOfPendingFollowUpItems:(*id)arg0 ;
-(id)initWithClientIdentifier:(id)arg0 ;
-(id)initWithClientIdentifier:(id)arg0 machServiceName:(id)arg1 delegate:(id)arg2 ;
-(id)initWithClientIdentifier:(id)arg0 xpcEndpoint:(id)arg1 ;
-(id)pendingFollowUpItems:(*id)arg0 ;
-(void)_didActivateHSA2LoginNotification:(id)arg0 ;
-(void)_postHSA2LoginCode:(id)arg0 withNotification:(id)arg1 completion:(id)arg2 ;
-(void)_postHSA2LoginNotification:(id)arg0 completion:(id)arg1 ;
-(void)_postHSA2PasswordChangeForAppleID:(id)arg0 completion:(id)arg1 ;
-(void)_postHSA2PasswordResetNotification:(id)arg0 completion:(id)arg1 ;
-(void)_tearDownHSA2LoginNotificationWithPushMessageID:(id)arg0 ;
-(void)clearPendingFollowUpItemsWithCompletion:(id)arg0 ;
-(void)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)countOfPendingFollowUpItemsWithCompletion:(id)arg0 ;
-(void)pendingFollowUpItemsWithCompletion:(id)arg0 ;
-(void)postFollowUpItem:(id)arg0 completion:(id)arg1 ;
-(void)updateBadgesForTimer;


@end


#endif