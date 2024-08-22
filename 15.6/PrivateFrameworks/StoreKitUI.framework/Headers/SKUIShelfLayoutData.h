// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISHELFLAYOUTDATA_H
#define SKUISHELFLAYOUTDATA_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SKUIShelfLayoutData : NSObject {
    NSMutableArray *_columnWidths;
    *CGFloat _rowHeights;
}


@property (readonly, nonatomic) CGFloat columnSpacing; // ivar: _columnSpacing
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, nonatomic) NSInteger numberOfColumns;
@property (readonly, nonatomic) NSInteger numberOfRows; // ivar: _numberOfRows
@property (readonly, nonatomic) CGSize totalContentSize;


-(CGFloat)columnWidthForIndex:(NSInteger)arg0 ;
-(CGFloat)rowHeightForIndex:(NSInteger)arg0 ;
-(id)initWithNumberOfRows:(NSInteger)arg0 columnSpacing:(CGFloat)arg1 ;
-(struct CGSize )sizeForItemAtIndex:(NSInteger)arg0 ;
-(void)dealloc;
-(void)enumerateColumnsUsingBlock:(id)arg0 ;
-(void)enumerateRowsUsingBlock:(id)arg0 ;
-(void)reloadWithItemCount:(NSInteger)arg0 sizeBlock:(id)arg1 ;


@end


#endif