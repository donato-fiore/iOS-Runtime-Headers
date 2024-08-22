// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKALERTUTILITIES_H
#define CKALERTUTILITIES_H

@protocol CKAlertUtilitiesProtocol;

#import <Foundation/Foundation.h>


@interface CKAlertUtilities : NSObject

@property (weak, nonatomic) NSObject<CKAlertUtilitiesProtocol> *delegate; // ivar: _delegate


+(BOOL)_isNumberEditable;
+(NSInteger)missingAlertTypeToNotify;
+(id)_getCTPhoneNumber;
+(id)_grabCTSIMStatus;
+(id)coreTelephonyClient;
+(id)phoneNumberInfo;
+(id)selectedSubscriptionContext;
-(void)_didFinishCheckingMissingCarrierSetting;
-(void)_displayMissingInformationAlert:(NSInteger)arg0 ;
-(void)_showNetworkPrefs:(NSInteger)arg0 ;
-(void)checkMissingCarrierSetting;


@end


#endif