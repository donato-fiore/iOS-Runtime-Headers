// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRLATTICEPATH_H
#define CRLATTICEPATH_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CRLatticePath : NSObject

@property (readonly) CGFloat cnnScore; // ivar: _cnnScore
@property (readonly, nonatomic) NSArray *edges; // ivar: _edges
@property (readonly) CGFloat geometryScore; // ivar: _geometryScore
@property (readonly) CGFloat lexiconScore; // ivar: _lexiconScore
@property (readonly) CGFloat ngramScore; // ivar: _ngramScore
@property (readonly) CGFloat patternScore; // ivar: _patternScore
@property (readonly) CGFloat totalScore; // ivar: _totalScore


-(id)initWithEdgeIndexes:(id)arg0 lex:(CGFloat)arg1 cnn:(CGFloat)arg2 ngram:(CGFloat)arg3 geom:(CGFloat)arg4 pattern:(CGFloat)arg5 total:(CGFloat)arg6 ;


@end


#endif