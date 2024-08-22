// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMEWALLETDATASOURCE_H
#define HMDHOMEWALLETDATASOURCE_H

@class HMFObject, NSString;
@protocol HMDHomeWalletDataSource;



@interface HMDHomeWalletDataSource : HMFObject <HMDHomeWalletDataSource>



@property (readonly) NSInteger accessoryWriteMaxRetryCount;
@property (readonly) CGFloat accessoryWriteRetryInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isWatch;
@property int passCodeChangeNotificationToken; // ivar: _passCodeChangeNotificationToken
@property (readonly, getter=isResidentCapable) BOOL residentCapable;
@property (readonly) Class superclass;
@property (readonly) NSInteger walletKeyColor;


-(BOOL)registerForPasscodeChangeNotificationWithQueue:(id)arg0 callback:(id)arg1 ;
-(id)init;
-(id)numberValueFromNoBackupStoreWithKey:(id)arg0 ;
-(void)canNotifyAboutExpressModeWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)persistNumberValueToNoBackupStore:(id)arg0 withKey:(id)arg1 ;
-(void)showExpressEnabledUserNotificationForWalletKeyWithPassUniqueID:(id)arg0 completion:(id)arg1 ;


@end


#endif