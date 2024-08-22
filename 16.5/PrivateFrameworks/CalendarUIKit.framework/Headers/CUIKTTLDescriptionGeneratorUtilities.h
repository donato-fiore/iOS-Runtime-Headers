// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKTTLDESCRIPTIONGENERATORUTILITIES_H
#define CUIKTTLDESCRIPTIONGENERATORUTILITIES_H


#import <Foundation/Foundation.h>


@interface CUIKTTLDescriptionGeneratorUtilities : NSObject



+(BOOL)ttlDescriptionShouldIncludeTrafficForHypothesis:(id)arg0 ;
+(BOOL)ttlDescriptionShouldIncludeTrafficForHypothesisThatSupportsLiveTraffic:(BOOL)arg0 transportType:(int)arg1 eta:(CGFloat)arg2 ;
+(NSUInteger)ttlDescriptionTypeForDate:(id)arg0 hypothesis:(id)arg1 ;
+(id)descriptionForType:(NSUInteger)arg0 ;


@end


#endif