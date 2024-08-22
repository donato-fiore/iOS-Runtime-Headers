// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSPRIVACYVOUCHERLOCKBOX_H
#define VSPRIVACYVOUCHERLOCKBOX_H

@class NSString, NSUndoManager, NSArray;
@protocol VSRemoteNotifierDelegate;

#import <Foundation/Foundation.h>

#import "VSRemoteNotifier.h"

@interface VSPrivacyVoucherLockbox : NSObject <VSRemoteNotifierDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier; // ivar: _remoteNotifier
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUndoManager *undoManager; // ivar: _undoManager
@property (readonly, copy, nonatomic) NSArray *unredeemedVouchers;


+(id)getVouchersFromSelectedAppDescriptions:(id)arg0 forProviderID:(id)arg1 ;
-(id)_voucherArchiveURL;
-(id)init;
-(void)issueVouchers:(id)arg0 ;
-(void)issueVouchersForApps:(id)arg0 providerID:(id)arg1 ;
-(void)redeemVoucher:(id)arg0 ;
-(void)remoteNotifier:(id)arg0 didReceiveRemoteNotificationWithUserInfo:(id)arg1 ;
-(void)removeAllVouchers;


@end


#endif