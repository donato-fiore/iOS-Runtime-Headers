// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSTRUCTUREDPAGEGROUPEDTABLEDATASOURCE_H
#define SUSTRUCTUREDPAGEGROUPEDTABLEDATASOURCE_H



#import "SUStructuredPageTableDataSource.h"

@interface SUStructuredPageGroupedTableDataSource : SUStructuredPageTableDataSource



-(BOOL)canShowItemOfferButtonForItem:(id)arg0 ;
-(CGFloat)heightForFooterInSection:(NSInteger)arg0 ;
-(Class)cellClassForItem:(id)arg0 reuseIdentifier:(*id)arg1 ;
-(Class)cellConfigurationClassForItem:(id)arg0 ;
-(NSInteger)tableViewStyle;
-(id)_subtitleForSectionIndex:(NSInteger)arg0 ;
-(id)newHeaderViewForSection:(NSInteger)arg0 ;
-(void)configureCell:(id)arg0 forIndexPath:(id)arg1 ;
-(void)reloadCellContexts;


@end


#endif