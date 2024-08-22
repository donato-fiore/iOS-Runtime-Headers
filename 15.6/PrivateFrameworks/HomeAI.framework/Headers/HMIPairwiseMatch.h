// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIPAIRWISEMATCH_H
#define HMIPAIRWISEMATCH_H


#import <Foundation/Foundation.h>


@interface HMIPairwiseMatch : NSObject

@property (readonly) NSUInteger firstIndex; // ivar: _firstIndex
@property (readonly) float score; // ivar: _score
@property (readonly) NSUInteger secondIndex; // ivar: _secondIndex


-(id)initWithFirstIndex:(NSUInteger)arg0 secondIndex:(NSUInteger)arg1 score:(float)arg2 ;


@end


#endif