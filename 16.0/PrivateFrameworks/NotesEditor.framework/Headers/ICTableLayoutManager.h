// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTABLELAYOUTMANAGER_H
#define ICTABLELAYOUTMANAGER_H

@class NSMutableDictionary, ICTableColumnWidthManager, NSString, NSRegularExpression, ICTable;
@protocol ICAvailableTableWidthProviding;

#import <Foundation/Foundation.h>


@interface ICTableLayoutManager : NSObject <ICAvailableTableWidthProviding>



@property (readonly, nonatomic) CGFloat availableWidth;
@property (readonly) NSMutableDictionary *columnLayoutManagers; // ivar: _columnLayoutManagers
@property (readonly) ICTableColumnWidthManager *columnWidthManager; // ivar: _columnWidthManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<ICAvailableTableWidthProviding> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat emptyCellHeight;
@property CGFloat emptyCellLineHeight; // ivar: _emptyCellLineHeight
@property CGFloat emptyCellLineSpacing; // ivar: _emptyCellLineSpacing
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSRegularExpression *highlightPatternRegex; // ivar: _highlightPatternRegex
@property (readonly, nonatomic) NSMutableDictionary *rowPositions; // ivar: _rowPositions
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) ICTable *table; // ivar: _table


-(id)columnLayoutManagerForColumn:(id)arg0 ;
-(id)initWithTable:(id)arg0 delegate:(id)arg1 ;
-(void)removeColumnLayoutManagerForColumn:(id)arg0 ;
-(void)setYPosition:(CGFloat)arg0 forRow:(id)arg1 shouldInvalidate:(BOOL)arg2 ;
-(void)updateForMovedRow:(id)arg0 ;


@end


#endif