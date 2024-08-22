// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUTEMPERATURECONTROLPANELCONFIGURATION_H
#define HUTEMPERATURECONTROLPANELCONFIGURATION_H

@class NSString;
@protocol HUControlPanelConfiguration, HUControlPanelRule;

#import <Foundation/Foundation.h>


@interface HUTemperatureControlPanelConfiguration : NSObject <HUControlPanelConfiguration>



@property (readonly, nonatomic) Class cellClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HUControlPanelRule> *rule;
@property (readonly) Class superclass;


+(id)_temperatureFormatter;
-(BOOL)shouldShowSectionTitleForItem:(id)arg0 ;
-(void)setupControlsForCell:(id)arg0 item:(id)arg1 ;


@end


#endif