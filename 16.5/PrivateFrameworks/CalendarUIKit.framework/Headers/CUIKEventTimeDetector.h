// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKEVENTTIMEDETECTOR_H
#define CUIKEVENTTIMEDETECTOR_H


#import <Foundation/Foundation.h>


@interface CUIKEventTimeDetector : NSObject



+(id)dateResultsFromString:(id)arg0 referenceDate:(id)arg1 ;
+(id)resultDictionaryForString:(id)arg0 referenceDate:(id)arg1 ;
+(id)resultDictionaryForString:(id)arg0 referenceDate:(id)arg1 ignoreDurationForApproximateTime:(BOOL)arg2 preferTimes:(BOOL)arg3 ;
+(id)stripRanges:(id)arg0 fromString:(id)arg1 ;


@end


#endif