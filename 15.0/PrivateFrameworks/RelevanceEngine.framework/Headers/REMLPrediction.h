// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMLPREDICTION_H
#define REMLPREDICTION_H

@class NSMutableSet, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface REMLPrediction : NSObject <NSCopying>

 {
    NSMutableSet *_explanations;
}


@property (nonatomic) float bias; // ivar: _bias
@property (readonly, nonatomic) NSSet *explanations;
@property (readonly, nonatomic) float mean; // ivar: _mean
@property (readonly, nonatomic) float pessimistic; // ivar: _pessimistic
@property (readonly, nonatomic) float probability; // ivar: _probability
@property (readonly, nonatomic) float variance; // ivar: _variance


+(id)predictionWithProbability:(float)arg0 mean:(float)arg1 variance:(float)arg2 pessimistic:(float)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)explanationDescription;
-(void)addExplanation:(id)arg0 ;


@end


#endif