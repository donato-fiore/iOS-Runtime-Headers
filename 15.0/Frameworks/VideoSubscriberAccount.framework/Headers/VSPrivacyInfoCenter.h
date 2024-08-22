// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSPRIVACYINFOCENTER_H
#define VSPRIVACYINFOCENTER_H

@class NSString;
@protocol MCProfileConnectionObserver;

#import <Foundation/Foundation.h>


@interface VSPrivacyInfoCenter : NSObject <MCProfileConnectionObserver>



@property (nonatomic) NSInteger accountAccessStatus; // ivar: _accountAccessStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int registrationToken; // ivar: _registrationToken
@property (readonly) Class superclass;


+(id)sharedPrivacyInfoCenter;
-(id)init;
-(id)updateAccountAccessStatusWithError:(id)arg0 ;
-(void)_invalidateAccountAccessStatus;
-(void)dealloc;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)updateAccountAccessStatusWithResponse:(id)arg0 ;


@end


#endif