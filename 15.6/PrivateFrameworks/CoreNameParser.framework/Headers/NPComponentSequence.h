// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPCOMPONENTSEQUENCE_H
#define NPCOMPONENTSEQUENCE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface NPComponentSequence : NSObject

@property CGFloat emissionModelScore; // ivar: _emissionModelScore
@property (getter=isFavorite) BOOL favorite; // ivar: _favorite
@property (copy) NSArray *observation; // ivar: _observation
@property (copy) NSArray *oovIndices; // ivar: _oovIndices
@property CGFloat score; // ivar: _score
@property (copy) NSArray *sequence; // ivar: _sequence
@property CGFloat stateModelScore; // ivar: _stateModelScore


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToComponentSequence:(id)arg0 ;
-(id)description;
-(id)initWithObservationSequence:(id)arg0 hiddenSequence:(id)arg1 oovIndices:(id)arg2 emissionModelScore:(CGFloat)arg3 stateModelScore:(CGFloat)arg4 boost:(CGFloat)arg5 ;
-(id)oovTokens;
-(void)setValue:(id)arg0 atSequenceIndex:(NSUInteger)arg1 ;


@end


#endif