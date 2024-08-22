// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSCOREDACTIONWITHREASON_H
#define ATXSCOREDACTIONWITHREASON_H

@class NSString, ATXScoredPrediction;

#import <Foundation/Foundation.h>


@interface ATXScoredActionWithReason : NSObject

@property (readonly, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) ATXScoredPrediction *scoredAction; // ivar: _scoredAction


-(id)init;
-(id)initWithScoredAction:(id)arg0 predictionReason:(id)arg1 ;


@end


#endif