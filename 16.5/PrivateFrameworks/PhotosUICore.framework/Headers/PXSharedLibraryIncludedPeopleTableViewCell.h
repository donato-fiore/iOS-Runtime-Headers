// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYINCLUDEDPEOPLETABLEVIEWCELL_H
#define PXSHAREDLIBRARYINCLUDEDPEOPLETABLEVIEWCELL_H

@class UITableViewCell;


#import "PXSharedLibraryIncludedPeopleViewController.h"
#import "PXSharedLibraryIncludedPeopleDataSourceManager.h"

@interface PXSharedLibraryIncludedPeopleTableViewCell : UITableViewCell {
    PXSharedLibraryIncludedPeopleViewController *_includedPeopleViewController;
}


@property (readonly, nonatomic) PXSharedLibraryIncludedPeopleDataSourceManager *dataSourceManager; // ivar: _dataSourceManager


+(CGFloat)heightForWidth:(CGFloat)arg0 numberOfItems:(NSUInteger)arg1 ;
-(id)initWithDataSourceManager:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif