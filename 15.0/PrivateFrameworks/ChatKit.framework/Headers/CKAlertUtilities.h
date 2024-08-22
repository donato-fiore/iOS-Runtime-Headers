// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKALERTUTILITIES_H
#define CKALERTUTILITIES_H

@protocol CKAlertUtilitiesProtocol;

#import <Foundation/Foundation.h>


@interface CKAlertUtilities : NSObject

@property (weak, nonatomic) NSObject<CKAlertUtilitiesProtocol> *delegate; // ivar: _delegate


+(NSInteger)missingAlertTypeToNotify;
+(struct __CFDictionary *)_copyCTPhoneNumberSetting;
+(struct __CFString *)_grabCTSIMStatus;
-(void)_didFinishCheckingMissingCarrierSetting;
-(void)_displayMissingInformationAlert:(NSInteger)arg0 ;
-(void)_showNetworkPrefs:(NSInteger)arg0 ;
-(void)checkMissingCarrierSetting;


@end


#endif