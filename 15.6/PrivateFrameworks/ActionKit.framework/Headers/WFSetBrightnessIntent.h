// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSETBRIGHTNESSINTENT_H
#define WFSETBRIGHTNESSINTENT_H

@class INIntent, NSNumber;
@protocol WFDecimalSettingIntent;



@interface WFSetBrightnessIntent : INIntent <WFDecimalSettingIntent>



@property (readonly, nonatomic) Class settingsClientClass;
@property (retain, nonatomic) NSNumber *value;
@property (copy, nonatomic) NSNumber *value;


-(void)applyWithSettingsClient:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif