// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSPENDINGSUMMARYGENERATOR_H
#define PKSPENDINGSUMMARYGENERATOR_H


#import <Foundation/Foundation.h>


@interface PKSpendingSummaryGenerator : NSObject



+(id)generateSummaryOfType:(NSUInteger)arg0 startingAt:(id)arg1 withSegmentLimit:(NSUInteger)arg2 ;
+(id)generateSummaryOfType:(NSUInteger)arg0 startingAt:(id)arg1 withSegmentLimit:(NSUInteger)arg2 generateBeyondCurrentDay:(BOOL)arg3 ;


@end


#endif