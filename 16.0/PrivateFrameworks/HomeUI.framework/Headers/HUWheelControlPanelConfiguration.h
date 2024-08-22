// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUWHEELCONTROLPANELCONFIGURATION_H
#define HUWHEELCONTROLPANELCONFIGURATION_H

@class NSString;
@protocol HUControlPanelConfiguration, HUControlPanelRule;

#import <Foundation/Foundation.h>


@interface HUWheelControlPanelConfiguration : NSObject <HUControlPanelConfiguration>



@property (readonly, nonatomic) Class cellClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HUControlPanelRule> *rule;
@property (readonly) Class superclass;


-(void)setupControlsForCell:(id)arg0 item:(id)arg1 ;


@end


#endif