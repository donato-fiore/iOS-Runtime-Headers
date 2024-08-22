// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPSTREAMINGLOCATIONSCORER_H
#define PPSTREAMINGLOCATIONSCORER_H


#import <Foundation/Foundation.h>

#import "PPScoreInterpreter.h"
#import "PPScoreDict.h"

@interface PPStreamingLocationScorer : NSObject {
    PPScoreInterpreter *_aggregationScorer;
    PPScoreInterpreter *_finalScorer;
    PPScoreDict *_aggregationScoreInputs;
    PPScoreDict *_currentAggResult;
}






@end


#endif