// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGQUICKRESPONSESDISTRIBUTINGCOUNT_H
#define SGQUICKRESPONSESDISTRIBUTINGCOUNT_H


#import <Foundation/Foundation.h>


@interface SGQuickResponsesDistributingCount : NSObject



+(NSUInteger)responsesToFillForResponseCount:(NSUInteger)arg0 config:(id)arg1 ;
+(NSUInteger)validClassesForClassCount:(NSUInteger)arg0 responseCount:(NSUInteger)arg1 config:(id)arg2 ;
+(id)numResponsesForScores:(id)arg0 responseCount:(NSUInteger)arg1 config:(id)arg2 ;
+(id)probsForClasses:(id)arg0 withCount:(NSUInteger)arg1 ;


@end


#endif