// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PREDICTION_H
#define PREDICTION_H


#import <Foundation/Foundation.h>


@interface Prediction : NSObject

@property (readonly, nonatomic) CGFloat doubleTapScore; // ivar: _doubleTapScore
@property (readonly, nonatomic) CGFloat maxConfidence; // ivar: _maxConfidence
@property (nonatomic) CGFloat noneScore; // ivar: _noneScore
@property (nonatomic) NSUInteger predictedClass; // ivar: _predictedClass
@property (readonly, nonatomic) CGFloat tripleTapScore; // ivar: _tripleTapScore


-(id)description;
-(id)initWithModelOutput:(id)arg0 ;


@end


#endif