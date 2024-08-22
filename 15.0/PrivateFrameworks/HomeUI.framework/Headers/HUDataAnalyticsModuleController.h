// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUDATAANALYTICSMODULECONTROLLER_H
#define HUDATAANALYTICSMODULECONTROLLER_H

@protocol HUDataAnalyticsModuleControllerDelegate;


#import "HUItemTableModuleController.h"

@interface HUDataAnalyticsModuleController : HUItemTableModuleController

@property (weak, nonatomic) NSObject<HUDataAnalyticsModuleControllerDelegate> *dataAnalyticsModuleControllerDelegate; // ivar: _dataAnalyticsModuleControllerDelegate


-(BOOL)canSelectItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(id)module;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;


@end


#endif