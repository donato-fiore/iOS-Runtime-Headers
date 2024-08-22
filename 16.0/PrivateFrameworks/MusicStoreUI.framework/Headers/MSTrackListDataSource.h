// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSTRACKLISTDATASOURCE_H
#define MSTRACKLISTDATASOURCE_H



#import "MSStructuredPageTableDataSource.h"

@interface MSTrackListDataSource : MSStructuredPageTableDataSource



-(BOOL)canDoubleTapIndexPath:(id)arg0 ;
-(BOOL)canShowItemOfferButtonForItem:(id)arg0 ;
-(BOOL)canShowPreviewForItem:(id)arg0 ;
-(CGFloat)heightForPlaceholderCells;
-(Class)cellConfigurationClassForItem:(id)arg0 ;
-(NSInteger)tableViewStyle;
-(id)_stylesheetString;
-(id)cellConfigurationForIndex:(NSInteger)arg0 item:(id)arg1 ;
-(id)cellForIndexPath:(id)arg0 ;
-(id)headerViewForSection:(NSInteger)arg0 ;
-(id)placeholderCellForIndexPath:(id)arg0 ;
-(void)configureCell:(id)arg0 forIndexPath:(id)arg1 ;
-(void)configurePlaceholderCell:(id)arg0 forIndexPath:(id)arg1 ;
-(void)reloadCellContexts;


@end


#endif