// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIAIRPLANEMODEINQUIRY_H
#define AMSUIAIRPLANEMODEINQUIRY_H

@class RadiosPreferences;
@protocol RadiosPreferencesDelegate, AMSUIAirplaneModeInquiryDelegate;

#import <Foundation/Foundation.h>


@interface AMSUIAirplaneModeInquiry : NSObject <RadiosPreferencesDelegate>



@property (weak, nonatomic) NSObject<AMSUIAirplaneModeInquiryDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) RadiosPreferences *radiosPreferences; // ivar: _radiosPreferences


+(id)settingsURL;
-(id)init;
-(void)airplaneModeChanged;


@end


#endif