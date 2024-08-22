// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIDAIRPLANEMODEINQUIRY_H
#define AMSUIDAIRPLANEMODEINQUIRY_H

@class RadiosPreferences;
@protocol RadiosPreferencesDelegate, AMSUIDAirplaneModeInquiryDelegate;

#import <Foundation/Foundation.h>


@interface AMSUIDAirplaneModeInquiry : NSObject <RadiosPreferencesDelegate>



@property (weak, nonatomic) NSObject<AMSUIDAirplaneModeInquiryDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) RadiosPreferences *radiosPreferences; // ivar: _radiosPreferences


+(id)settingsURL;
-(id)init;
-(void)airplaneModeChanged;


@end


#endif