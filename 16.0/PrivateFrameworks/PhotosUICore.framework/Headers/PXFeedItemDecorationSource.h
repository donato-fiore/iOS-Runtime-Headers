// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFEEDITEMDECORATIONSOURCE_H
#define PXFEEDITEMDECORATIONSOURCE_H

@class NSString;
@protocol PXGSelectionDecorationSource;

#import <Foundation/Foundation.h>

#import "PXSectionedDataSource.h"
#import "PXGLayout.h"
#import "PXFeedSectionContentLayout.h"
#import "PXSelectionSnapshot.h"

@interface PXFeedItemDecorationSource : NSObject <PXGSelectionDecorationSource>



@property (readonly, nonatomic) PXSectionedDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) PXGLayout *decoratedLayout; // ivar: _decoratedLayout
@property (readonly, nonatomic) PXFeedSectionContentLayout *decoratedSectionContentLayout; // ivar: _decoratedSectionContentLayout
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger section; // ivar: _section
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot; // ivar: _selectionSnapshot
@property (readonly) Class superclass;


-(NSInteger)overallSelectionOrderAtSpriteIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)selectionDecorationStyleInLayout:(id)arg0 ;
-(NSUInteger)selectionDecorationAdditionsInLayout:(id)arg0 ;
-(id)_spriteIndexesForItems:(id)arg0 inLayout:(id)arg1 ;
-(id)selectedSpriteIndexesInLayout:(id)arg0 ;


@end


#endif