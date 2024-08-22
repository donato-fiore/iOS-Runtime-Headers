// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASKAIRPLANEMODEINQUIRY_H
#define ASKAIRPLANEMODEINQUIRY_H

@class RadiosPreferences;
@protocol RadiosPreferencesDelegate, ASKAirplaneModeInquiryDelegate;

#import <Foundation/Foundation.h>


@interface ASKAirplaneModeInquiry : NSObject <RadiosPreferencesDelegate>



@property (weak, nonatomic) NSObject<ASKAirplaneModeInquiryDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) RadiosPreferences *radiosPreferences; // ivar: _radiosPreferences


+(id)settingsURL;
-(id)init;
-(void)airplaneModeChanged;


@end


#endif