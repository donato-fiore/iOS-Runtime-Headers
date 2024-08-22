// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASEENVELOPE_H
#define PHASEENVELOPE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PHASENumericPair.h"

@interface PHASEEnvelope : NSObject {
    ? _startPoint;
    unique_ptr<Phase::Envelope<double>, std::default_delete<Phase::Envelope<double>>> _envelope;
}


@property (readonly, nonatomic) PHASENumericPair *domain; // ivar: _domain
@property (readonly, nonatomic) PHASENumericPair *range; // ivar: _range
@property (readonly, copy, nonatomic) NSArray *segments; // ivar: _segments
@property ? startPoint;


-(CGFloat)evaluate:(CGFloat)arg0 ;
-(CGFloat)evaluateForValue:(CGFloat)arg0 ;
-(id)initWithStartPoint:(id)arg0 segments;


@end


#endif