// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSTRUCTUREDPAGETABLEDATASOURCE_H
#define SUSTRUCTUREDPAGETABLEDATASOURCE_H

@class NSMutableArray;


#import "SUTableDataSource.h"
#import "SUItem.h"
#import "SUClientInterface.h"
#import "SUStructuredPage.h"

@interface SUStructuredPageTableDataSource : SUTableDataSource {
    NSMutableArray *_cachedHeaderViews;
    CGFloat _offerButtonWidth;
}


@property (retain, nonatomic) SUItem *activeLoadMoreItem; // ivar: _activeLoadMoreItem
@property (retain, nonatomic) SUClientInterface *clientInterface; // ivar: _clientInterface
@property (retain, nonatomic) SUStructuredPage *structuredPage; // ivar: _structuredPage
@property (nonatomic) NSInteger style; // ivar: _style


-(BOOL)_shouldShowItemOfferButtonForItem:(id)arg0 ;
-(BOOL)canDeleteIndexPath:(id)arg0 ;
-(BOOL)canSelectIndexPath:(id)arg0 ;
-(BOOL)canShowItemOfferButtonForItem:(id)arg0 ;
-(BOOL)deleteIndexPath:(id)arg0 ;
-(CGFloat)cellHeightForIndexPath:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 reuseIdentifier:(*id)arg1 ;
-(Class)cellConfigurationClassForItem:(id)arg0 ;
-(NSInteger)numberOfRowsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)sectionIndexForIndexTitle:(id)arg0 atIndex:(NSInteger)arg1 ;
-(NSInteger)tableViewStyle;
-(id)_itemOfferButtonForCell:(id)arg0 item:(id)arg1 ;
-(id)cellConfigurationForIndex:(NSInteger)arg0 item:(id)arg1 ;
-(id)cellForIndexPath:(id)arg0 ;
-(id)headerViewForSection:(NSInteger)arg0 ;
-(id)newHeaderViewForSection:(NSInteger)arg0 ;
-(id)sectionIndexTitles;
-(id)titleForDeleteConfirmationForIndexPath:(id)arg0 ;
-(id)titleForHeaderInSection:(NSInteger)arg0 ;
-(void)_configureLoadMoreCell:(id)arg0 forItem:(id)arg1 ;
-(void)configureCell:(id)arg0 forIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)reloadCellContexts;
-(void)reloadData;


@end


#endif