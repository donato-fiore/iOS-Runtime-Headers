// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGQUICKRESPONSESSCORING_H
#define SGQUICKRESPONSESSCORING_H


#import <Foundation/Foundation.h>


@interface SGQuickResponsesScoring : NSObject



+(id)categoryScoresWithModelScores:(id)arg0 config:(id)arg1 ;
+(id)modelScoresWithUnweightedScores:(id)arg0 config:(id)arg1 ;
+(id)sortedWithUnweightedScores:(id)arg0 config:(id)arg1 ;


@end


#endif