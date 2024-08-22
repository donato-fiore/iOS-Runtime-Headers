// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MADATAFRAME_H
#define MADATAFRAME_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "MAIndexCache.h"
#import "MAFloatMatrix.h"

@interface MADataFrame : NSObject

@property (readonly, nonatomic) MAIndexCache *columnIndexCache; // ivar: _columnIndexCache
@property (readonly, copy, nonatomic) NSArray *columnLabels;
@property (readonly, copy, nonatomic) MAFloatMatrix *matrix; // ivar: _matrix
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) MAIndexCache *rowIndexCache; // ivar: _rowIndexCache
@property (readonly, copy, nonatomic) NSArray *rowLabels;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)indexOfColumnWithLabel:(id)arg0 ;
-(NSInteger)indexOfRowWithLabel:(id)arg0 ;
-(NSUInteger)hash;
-(float)floatAtRowIndex:(NSInteger)arg0 columnIndex:(NSInteger)arg1 ;
-(id)csvString;
-(id)dataFrameByAppendingColumnsOfDataFrame:(id)arg0 withName:(id)arg1 ;
-(id)description;
-(id)initWithName:(id)arg0 rowIndexCache:(id)arg1 columnIndexCache:(id)arg2 matrix:(id)arg3 ;
-(id)initWithName:(id)arg0 rowLabels:(id)arg1 columnLabels:(id)arg2 matrix:(id)arg3 ;
-(id)numberAtRow:(id)arg0 column:(id)arg1 ;


@end


#endif