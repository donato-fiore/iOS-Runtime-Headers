// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSETWIFIINTENT_H
#define WFSETWIFIINTENT_H

@class INIntent, NSNumber;
@protocol WFBooleanSettingIntent;



@interface WFSetWiFiIntent : INIntent <WFBooleanSettingIntent>



@property (nonatomic) NSInteger operation;
@property (nonatomic) NSInteger operation;
@property (readonly, nonatomic) Class settingsClientClass;
@property (retain, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *state;


-(void)applyWithSettingsClient:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif