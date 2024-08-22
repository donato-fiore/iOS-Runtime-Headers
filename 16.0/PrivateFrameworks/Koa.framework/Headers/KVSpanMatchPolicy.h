// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVSPANMATCHPOLICY_H
#define KVSPANMATCHPOLICY_H


#import <Foundation/Foundation.h>


@interface KVSpanMatchPolicy : NSObject {
    unsigned int _options;
}




-(BOOL)allowAliasMatch;
-(BOOL)allowApproxMatch;
-(BOOL)allowPartialMatch;
-(BOOL)enableRankingWithPriors;
-(BOOL)prioritizeExactMatch;
-(BOOL)useTopFive;
-(float)absoluteThreshold;
-(float)globalRelativeThreshold;
-(float)matchScoreWeight;
-(float)priorScoreWeight;
-(float)regionalRelativeThreshold;
-(id)description;
-(id)init;
-(id)initWithOptions:(unsigned int)arg0 ;


@end


#endif