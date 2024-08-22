// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSAIRPLANEMODESETTINGSDETAIL_H
#define PSAIRPLANEMODESETTINGSDETAIL_H

@class NSString;
@protocol PSSettingsBoolDetail;

#import <Foundation/Foundation.h>


@interface PSAirplaneModeSettingsDetail : NSObject <PSSettingsBoolDetail>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isEnabled;
+(id)iconImage;
+(id)preferencesURL;
+(void)setEnabled:(BOOL)arg0 ;


@end


#endif