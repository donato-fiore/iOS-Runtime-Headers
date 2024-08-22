// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSCOREINTERPRETERCTX_H
#define PPSCOREINTERPRETERCTX_H


#import <Foundation/Foundation.h>

#import "PPScoreDict.h"

@interface PPScoreInterpreterCtx : NSObject {
    unique_ptr<std::vector<PPScoreInterpreterValue>, std::default_delete<std::vector<PPScoreInterpreterValue>>> _stack;
    PPScoreDict *_scoreInputs;
    PPScoreDict *_previousSubscores;
    PPScoreDict *_subscores;
}






@end


#endif