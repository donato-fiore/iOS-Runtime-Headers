// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMLDENSEMATRIX_H
#define PMLDENSEMATRIX_H


#import <Foundation/Foundation.h>

#import "PMLDenseVector.h"

@interface PMLDenseMatrix : NSObject {
    PMLDenseVector *_data;
}


@property (readonly, nonatomic) NSUInteger numberOfColumns; // ivar: _numberOfColumns
@property (readonly, nonatomic) NSUInteger numberOfRows; // ivar: _numberOfRows


+(id)denseMatrixFromData:(id)arg0 numberOfRows:(NSUInteger)arg1 numberOfColumns:(NSUInteger)arg2 ;
+(id)denseMatrixFromNumbers:(id)arg0 ;
-(*float)values;
-(id)initWithData:(id)arg0 numberOfRows:(NSUInteger)arg1 numberOfColumns:(NSUInteger)arg2 ;
-(void)enumerateNonZeroValuesWithBlock:(id)arg0 ;


@end


#endif