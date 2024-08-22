// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHGRIDPARTITIONER_H
#define TSCHGRIDPARTITIONER_H


#import <Foundation/Foundation.h>


@interface TSCHGridPartitioner : NSObject

@property (readonly, nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (readonly, nonatomic) CGSize targetSize; // ivar: _targetSize
@property (readonly, nonatomic) CGAffineTransform transform; // ivar: _transform


-(NSUInteger)gridKeyForSourcePoint:(struct CGPoint )arg0 ;
-(id)initWithSourceRect:(struct CGRect )arg0 gridWidth:(NSUInteger)arg1 gridHeight:(NSUInteger)arg2 ;
-(id)initWithSourceSize:(struct CGSize )arg0 gridWidth:(NSUInteger)arg1 gridHeight:(NSUInteger)arg2 ;


@end


#endif