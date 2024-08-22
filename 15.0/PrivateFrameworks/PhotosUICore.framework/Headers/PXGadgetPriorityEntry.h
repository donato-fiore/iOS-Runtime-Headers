// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGADGETPRIORITYENTRY_H
#define PXGADGETPRIORITYENTRY_H

@class NSDate;
@protocol PXForYouRankable;

#import <Foundation/Foundation.h>


@interface PXGadgetPriorityEntry : NSObject

@property (retain, nonatomic) NSDate *cachedPriorityDate; // ivar: _cachedPriorityDate
@property (nonatomic) NSInteger currentRank; // ivar: _currentRank
@property (retain, nonatomic) NSObject<PXForYouRankable> *rankable; // ivar: _rankable




@end


#endif