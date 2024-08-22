// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMLPREDICTIONSET_H
#define REMLPREDICTIONSET_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "REMLPrediction.h"

@interface REMLPredictionSet : NSObject {
    NSDictionary *_predictionsByKey;
}


@property (readonly, nonatomic) REMLPrediction *prediction; // ivar: _prediction


-(id)initWithPrediction:(id)arg0 ;
-(id)initWithPrediction:(id)arg0 predictionMap:(id)arg1 ;
-(id)predictionForKey:(id)arg0 ;


@end


#endif