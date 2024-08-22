// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXACTIONRESULT_H
#define ATXACTIONRESULT_H

@class NSString, ATXScoredPrediction;

#import <Foundation/Foundation.h>


@interface ATXActionResult : NSObject {
    ATXPredictionItem _predictionItem;
    BOOL _hasPredictionItem;
}


@property (readonly, nonatomic) NSString *actionKey; // ivar: _actionKey
@property (readonly, nonatomic) BOOL isSampledResultForLoggingOnly;
@property (readonly, nonatomic) *ATXPredictionItem predictionItem;
@property (readonly, nonatomic) ATXScoredPrediction *scoredAction; // ivar: _scoredAction


-(id)description;
-(id)initForLoggingWithPredictionItem:(struct ATXPredictionItem *)arg0 ;
-(id)initWithScoredAction:(id)arg0 predictionItem:(struct ATXPredictionItem *)arg1 actionKey:(id)arg2 ;


@end


#endif