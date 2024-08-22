// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUDIALASSIST_H
#define TUDIALASSIST_H

@class CoreTelephonyClient, NSString;
@protocol CoreTelephonyClientCarrierBundleDelegate;

#import <Foundation/Foundation.h>


@interface TUDialAssist : NSObject <CoreTelephonyClientCarrierBundleDelegate>



@property (readonly, nonatomic) CoreTelephonyClient *coreTelephonyClient; // ivar: _coreTelephonyClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int dialAssistUserSettingsChangedToken; // ivar: _dialAssistUserSettingsChangedToken
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)carrierBundleChange:(id)arg0 ;
-(void)dealloc;
-(void)operatorBundleChange:(id)arg0 ;


@end


#endif