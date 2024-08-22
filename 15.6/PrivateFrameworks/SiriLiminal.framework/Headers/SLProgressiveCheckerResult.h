// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLPROGRESSIVECHECKERRESULT_H
#define SLPROGRESSIVECHECKERRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SLProgressiveCheckerResult : NSObject

@property (readonly, nonatomic) NSUInteger analyzedSamples; // ivar: _analyzedSamples
@property (readonly, nonatomic) NSArray *detailedResult; // ivar: _detailedResult
@property (readonly, nonatomic) NSUInteger resultType; // ivar: _resultType
@property (readonly, nonatomic) float score; // ivar: _score


-(id)initWithScore:(float)arg0 ofType:(NSUInteger)arg1 analyzedSamples:(NSUInteger)arg2 detailedResults:(id)arg3 ;


@end


#endif