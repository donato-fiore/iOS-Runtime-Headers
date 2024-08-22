// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUDURATIONWHEELCONTROLPANELCONFIGURATION_H
#define HUDURATIONWHEELCONTROLPANELCONFIGURATION_H

@class NSString;
@protocol HUControlPanelConfiguration, HUControlPanelRule;

#import <Foundation/Foundation.h>


@interface HUDurationWheelControlPanelConfiguration : NSObject <HUControlPanelConfiguration>



@property (readonly, nonatomic) Class cellClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HUControlPanelRule> *rule;
@property (readonly) Class superclass;


+(id)_valuesBetweenMinValue:(id)arg0 maxValue:(id)arg1 stepValue:(id)arg2 ;
-(BOOL)shouldShowSectionFooterForItem:(id)arg0 ;
-(BOOL)shouldShowSectionTitleForItem:(id)arg0 ;
-(id)_characteristicTypesFromControlPanelItem:(id)arg0 ;
-(id)sectionFooterForItem:(id)arg0 forSourceItem:(id)arg1 ;
-(id)sectionTitleForItem:(id)arg0 forSourceItem:(id)arg1 ;
-(void)setupControlsForCell:(id)arg0 item:(id)arg1 ;


@end


#endif