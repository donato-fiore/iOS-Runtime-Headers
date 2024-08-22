// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDSOURCESLISTTABLEVIEWSECTION_H
#define WDSOURCESLISTTABLEVIEWSECTION_H

@class HKSourceListDataSource, NSString;
@protocol WDSourceTableViewSection, HKSourceListDataSourceObserver;


#import "WDTableViewSection.h"

@interface WDSourcesListTableViewSection : WDTableViewSection <WDSourceTableViewSection, HKSourceListDataSourceObserver>



@property (retain, nonatomic) HKSourceListDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *restorationSourceBundleIdentifier; // ivar: _restorationSourceBundleIdentifier
@property (readonly) Class superclass;


+(id)detailViewControllerForSourceModel:(id)arg0 withProfile:(id)arg1 ;
-(CGFloat)estimatedHeightForRow:(NSUInteger)arg0 ;
-(CGFloat)heightForRow:(NSUInteger)arg0 ;
-(id)detailViewControllerForSourceModel:(id)arg0 ;
-(id)noneCellForTableView:(id)arg0 ;
-(id)noneString;
-(void)dealloc;
-(void)setSourceListDataSource:(id)arg0 ;
-(void)sourceListDataSourceDidUpdate:(id)arg0 ;


@end


#endif