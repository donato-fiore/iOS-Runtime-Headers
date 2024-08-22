// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFORYOUSETTINGADVISORYGADGETPROVIDER_H
#define PXFORYOUSETTINGADVISORYGADGETPROVIDER_H

@class NSDate;
@protocol PXForYouRankable;


#import "PXGadgetProvider.h"

@interface PXForYouSettingAdvisoryGadgetProvider : PXGadgetProvider <PXForYouRankable>



@property (readonly, nonatomic) NSInteger forYouContentIdentifier;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;


-(NSUInteger)estimatedNumberOfGadgets;
-(void)generateGadgets;
-(void)loadDataForGadgets;


@end


#endif