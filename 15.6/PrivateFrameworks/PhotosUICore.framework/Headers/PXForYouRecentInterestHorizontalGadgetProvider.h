// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFORYOURECENTINTERESTHORIZONTALGADGETPROVIDER_H
#define PXFORYOURECENTINTERESTHORIZONTALGADGETPROVIDER_H

@class NSDate;
@protocol PXForYouRankable;


#import "PXHorizontalCollectionGadgetProvider.h"

@interface PXForYouRecentInterestHorizontalGadgetProvider : PXHorizontalCollectionGadgetProvider <PXForYouRankable>



@property (retain, nonatomic) NSDate *cachedPriorityDate; // ivar: _cachedPriorityDate
@property (readonly, nonatomic) NSInteger defaultPriority;
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly, nonatomic) NSDate *priorityDate;
@property (readonly, nonatomic) NSInteger priorityType;


-(BOOL)supportsDynamicRanking;
-(id)initWithContentGadgetProvider:(id)arg0 title:(id)arg1 ;


@end


#endif