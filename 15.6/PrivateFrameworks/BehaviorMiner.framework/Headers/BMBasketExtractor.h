// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMBASKETEXTRACTOR_H
#define BMBASKETEXTRACTOR_H


#import <Foundation/Foundation.h>


@interface BMBasketExtractor : NSObject

@property (readonly, nonatomic) CGFloat samplingInterval; // ivar: _samplingInterval
@property BOOL shouldStop; // ivar: _shouldStop


-(id)extractBasketsFromEvents:(id)arg0 itemTypes:(id)arg1 ;
-(id)extractBasketsFromEvents:(id)arg0 withTemporalFeatures:(BOOL)arg1 ;
-(id)extractDatedBasketsFromEvents:(id)arg0 itemTypes:(id)arg1 ;
-(id)extractTemporalItemsFromDate:(id)arg0 ;
-(id)initWithSamplingInterval:(CGFloat)arg0 ;
-(id)slotForHourOfDay:(id)arg0 ;
-(id)slotForHourOfDay:(id)arg0 slotDuration:(id)arg1 ;
-(void)terminateEarly;


@end


#endif