// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUTABLEFLOATMATRIX_H
#define MUTABLEFLOATMATRIX_H


#import <Foundation/Foundation.h>

#import "MutableFloatArray.h"

@interface MutableFloatMatrix : NSObject {
    MutableFloatArray *_floatArray;
}


@property (nonatomic) NSUInteger columnCount; // ivar: _columnCount
@property (readonly, nonatomic) *float floats;
@property (readonly, nonatomic) *float mutableFloats;
@property (nonatomic) NSUInteger rowCount; // ivar: _rowCount


-(float)floatAtRow:(NSUInteger)arg0 column:(NSUInteger)arg1 ;
-(id)debugDescription;
-(id)initWithRowCount:(NSUInteger)arg0 columnCount:(NSUInteger)arg1 ;
-(id)initWithRowCount:(NSUInteger)arg0 columnCount:(NSUInteger)arg1 valueBlock:(id)arg2 ;
-(void)argMinRow:(*NSUInteger)arg0 column:(*NSUInteger)arg1 ;
-(void)setFloat:(float)arg0 atRow:(NSUInteger)arg1 column:(NSUInteger)arg2 ;
-(void)setFloat:(float)arg0 forColumn:(NSUInteger)arg1 ;
-(void)setFloat:(float)arg0 forRow:(NSUInteger)arg1 ;


@end


#endif