// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSETFLASHLIGHTINTENT_H
#define WFSETFLASHLIGHTINTENT_H

@class INIntent, NSNumber;
@protocol WFBooleanSettingIntent, WFDecimalSettingIntent;



@interface WFSetFlashlightIntent : INIntent <WFBooleanSettingIntent, WFDecimalSettingIntent>



@property (nonatomic) NSInteger operation;
@property (nonatomic) NSInteger operation;
@property (readonly, nonatomic) Class settingsClientClass;
@property (retain, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *state;
@property (retain, nonatomic) NSNumber *value;
@property (copy, nonatomic) NSNumber *value;


-(void)applyWithSettingsClient:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif