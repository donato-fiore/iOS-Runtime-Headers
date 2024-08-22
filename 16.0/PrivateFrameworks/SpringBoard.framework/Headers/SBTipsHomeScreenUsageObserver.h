// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTIPSHOMESCREENUSAGEOBSERVER_H
#define SBTIPSHOMESCREENUSAGEOBSERVER_H

@class NSString;
@protocol SBHHomeScreenUsageMonitorObserver;

#import <Foundation/Foundation.h>

#import "SBIconController.h"

@interface SBTipsHomeScreenUsageObserver : NSObject <SBHHomeScreenUsageMonitorObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) SBIconController *iconController; // ivar: _iconController
@property (readonly) Class superclass;


-(id)initWithIconController:(id)arg0 ;
-(void)homeScreenUsageAggregatorDidNoteEditingModeEntered:(id)arg0 ;


@end


#endif