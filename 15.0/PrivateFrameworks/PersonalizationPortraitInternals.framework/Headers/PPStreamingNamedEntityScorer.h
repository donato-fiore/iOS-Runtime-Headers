// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPSTREAMINGNAMEDENTITYSCORER_H
#define PPSTREAMINGNAMEDENTITYSCORER_H


#import <Foundation/Foundation.h>

#import "PPScoreInterpreter.h"
#import "PPScoreDict.h"

@interface PPStreamingNamedEntityScorer : NSObject {
    PPScoreInterpreter *_aggregationScorer;
    PPScoreInterpreter *_finalScorer;
    PPScoreDict *_aggregationScoreInputs;
    PPScoreDict *_currentAggResult;
}






@end


#endif