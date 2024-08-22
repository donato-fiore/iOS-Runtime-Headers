// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISHINTEDVALUE_H
#define ISHINTEDVALUE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ISHintedValue : NSObject

@property (readonly) NSMutableArray *dimensions; // ivar: _dimensions
@property NSUInteger options; // ivar: _options
@property (readonly) NSMutableArray *values; // ivar: _values


-(BOOL)sizeOutsideHintedRange:(struct CGSize )arg0 ;
-(CGFloat)interpolationFactorForSize:(struct CGSize )arg0 ;
-(CGFloat)scaleFactorForSize:(struct CGSize )arg0 ;
-(NSInteger)indexForSize:(struct CGSize )arg0 ;
-(id)hintedValueForIndex:(NSInteger)arg0 ;
-(id)hintedValueForSize:(struct CGSize )arg0 ;
-(id)init;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(void)addHintedValue:(id)arg0 forSize:(struct CGSize )arg1 ;


@end


#endif