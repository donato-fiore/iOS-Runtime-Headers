// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDATATABLEBLUEPRINT_H
#define SXDATATABLEBLUEPRINT_H


#import <Foundation/Foundation.h>

#import "SXDataTableDictionary.h"

@interface SXDataTableBlueprint : NSObject

@property (readonly, nonatomic) SXDataTableDictionary *blueprint; // ivar: _blueprint
@property (readonly, nonatomic) SXDataTableDictionary *columnDividers; // ivar: _columnDividers
@property (readonly, nonatomic) SXDataTableDictionary *contentBlueprint; // ivar: _contentBlueprint
@property (nonatomic) NSUInteger dataOrientation; // ivar: _dataOrientation
@property (readonly, nonatomic) NSUInteger numberOfColumns; // ivar: _numberOfColumns
@property (readonly, nonatomic) NSUInteger numberOfRows; // ivar: _numberOfRows
@property (readonly, nonatomic) SXDataTableDictionary *rowDividers; // ivar: _rowDividers
@property (readonly, nonatomic) UIEdgeInsets tableInsets; // ivar: _tableInsets
@property (nonatomic) CGSize tableSize; // ivar: _tableSize


-(BOOL)isRectValid:(struct CGRect )arg0 ;
-(id)description;
-(id)initWithNumberOfRows:(NSUInteger)arg0 numberOfColumns:(NSUInteger)arg1 withTableInsets:(struct UIEdgeInsets )arg2 ;
-(struct CGRect )cellContentRectForIndexPath:(struct ? )arg0 ;
-(struct CGRect )cellRectForIndexPath:(struct ? )arg0 ;
-(struct CGRect )rectForColumnAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )rectForColumnDividerAtIndexPath:(struct ? )arg0 ;
-(struct CGRect )rectForRowAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )rectForRowDividerAtIndexPath:(struct ? )arg0 ;
-(void)addCellContentRect:(struct CGRect )arg0 forIndexPath:(struct ? )arg1 ;
-(void)addCellRect:(struct CGRect )arg0 forIndexPath:(struct ? )arg1 ;
-(void)addColumnDividerRect:(struct CGRect )arg0 forIndexPath:(struct ? )arg1 ;
-(void)addRowDividerRect:(struct CGRect )arg0 forIndexPath:(struct ? )arg1 ;


@end


#endif