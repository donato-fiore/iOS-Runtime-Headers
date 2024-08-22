// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSSTRUCTUREDPAGETABLEDATASOURCE_H
#define MSSTRUCTUREDPAGETABLEDATASOURCE_H

@class SUStructuredPageGroupedTableDataSource;



@interface MSStructuredPageTableDataSource : SUStructuredPageGroupedTableDataSource



-(BOOL)canDoubleTapIndexPath:(id)arg0 ;
-(BOOL)canShowPreviewForItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 reuseIdentifier:(*id)arg1 ;
-(void)configureCell:(id)arg0 forIndexPath:(id)arg1 ;


@end


#endif