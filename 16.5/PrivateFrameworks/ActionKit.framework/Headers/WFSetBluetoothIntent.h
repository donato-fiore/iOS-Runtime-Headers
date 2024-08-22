// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSETBLUETOOTHINTENT_H
#define WFSETBLUETOOTHINTENT_H

@class INIntent, NSNumber;
@protocol WFBooleanSettingIntent;



@interface WFSetBluetoothIntent : INIntent <WFBooleanSettingIntent>



@property (nonatomic) NSInteger operation;
@property (nonatomic) NSInteger operation;
@property (readonly, nonatomic) Class settingsClientClass;
@property (retain, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *state;


-(void)applyWithSettingsClient:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif