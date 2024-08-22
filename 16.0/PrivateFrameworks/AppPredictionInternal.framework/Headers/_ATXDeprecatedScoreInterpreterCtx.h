// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXDEPRECATEDSCOREINTERPRETERCTX_H
#define _ATXDEPRECATEDSCOREINTERPRETERCTX_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ATXScoreDict.h"

@interface _ATXDeprecatedScoreInterpreterCtx : NSObject {
    NSUInteger stackLen;
    CGFloat stack;
    ATXScoreDict *inputScores;
    ATXScoreDict *subscores;
    NSString *intentType;
}




-(id)initWithInputScores:(id)arg0 intentType:(id)arg1 ;


@end


#endif