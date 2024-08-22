// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HREXPANDEDCONTENTITEM_H
#define HREXPANDEDCONTENTITEM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "HRExpandedContentItemLearnMore.h"

@interface HRExpandedContentItem : NSObject

@property (retain, nonatomic) HRExpandedContentItemLearnMore *learnMore; // ivar: _learnMore
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)_atrialFibrillationExpandedContentItemsAlgVersionOne;
+(id)_atrialFibrillationExpandedContentItemsAlgorithmVersionTwo;
+(id)_highOrLowAbove120Below50HeartRateExpandedContentItemsAlgVersionOne;
+(id)_highOrLowAbove150Below50HeartRateExpandedContentItemsAlgorithmVersionTwoUpgradingFromAlgorithmVersion:(NSInteger)arg0 ;
+(id)_inconclusiveExpandedContentItemsAlgVersionOneWithLearnMoreDelegate:(id)arg0 ;
+(id)_inconclusiveExpandedContentItemsAlgorithmVersionTwoUpgradingFromAlgorithmVersion:(NSInteger)arg0 withLearnMoreDelegate:(id)arg1 ;
+(id)_poorRecordingExpandedContentItemsForAlgorithmVersionTwoWithLearnMoreDelegate:(id)arg0 ;
+(id)_sinusRhythmExpandedContentItemsAlgVersionOne;
+(id)atrialFibrillationItemsForAlgorithmVersion:(NSInteger)arg0 ;
+(id)highOrLowAbove120Below50HeartRateItemsForAlgorithmVersion:(NSInteger)arg0 ;
+(id)highOrLowAbove150Below50HeartRateItemsForAlgorithmVersion:(NSInteger)arg0 upgradingFromAlgorithmVersion:(NSInteger)arg1 ;
+(id)inconclusiveItemsForAlgorithmVersion:(NSInteger)arg0 upgradingFromAlgorithmVersion:(NSInteger)arg1 learnMoreDelegate:(id)arg2 ;
+(id)itemWithType:(NSInteger)arg0 title:(id)arg1 ;
+(id)poorRecordingItemsForAlgorithmVersion:(NSInteger)arg0 learnMoreDelegate:(id)arg1 ;
+(id)sinusRhythmItemsForAlgorithmVersion:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 title:(id)arg1 ;


@end


#endif