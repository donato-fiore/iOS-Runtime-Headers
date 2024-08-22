// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIGRIDLAYOUTMANAGER_H
#define SEARCHUIGRIDLAYOUTMANAGER_H

@class TLKGridLayoutManager, NSMapTable;

#import <Foundation/Foundation.h>


@interface SearchUIGridLayoutManager : NSObject

@property (retain, nonatomic) TLKGridLayoutManager *gridManager; // ivar: _gridManager
@property (nonatomic) BOOL isCompactTable; // ivar: _isCompactTable
@property (retain, nonatomic) NSMapTable *tableMapping; // ivar: _tableMapping


+(BOOL)shouldHideViewForRichData:(id)arg0 ;
+(id)alignmentsForSFHeaderRow:(id)arg0 ;
+(id)richTextForDataItems:(id)arg0 ;
+(id)richTextForRichDataItems:(id)arg0 ;
-(BOOL)computeCompactTableForSections:(id)arg0 ;
-(id)initWithHeaderSection:(id)arg0 dataSections:(id)arg1 ;
-(id)tableRowForTableRowCardSection:(id)arg0 ;


@end


#endif