// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDDEVICESOURCESLISTTABLEVIEWSECTION_H
#define WDDEVICESOURCESLISTTABLEVIEWSECTION_H

@class NSArray, NSMutableSet;


#import "WDSourcesListTableViewSection.h"

@interface WDDeviceSourcesListTableViewSection : WDSourcesListTableViewSection

@property (copy, nonatomic) NSArray *devices; // ivar: _devices
@property (retain, nonatomic) NSMutableSet *identifiers; // ivar: _identifiers
@property (copy, nonatomic) NSArray *list; // ivar: _list
@property (copy, nonatomic) NSArray *sources; // ivar: _sources


-(BOOL)_isSourceSelectable:(id)arg0 ;
-(NSUInteger)numberOfRows;
-(id)_sourceCellForRow:(NSUInteger)arg0 tableView:(id)arg1 ;
-(id)_sourceForRow:(NSInteger)arg0 ;
-(id)cellForRow:(NSUInteger)arg0 table:(id)arg1 ;
-(id)noneString;
-(id)titleForFooter;
-(id)titleForHeader;
-(id)willSelectRow:(id)arg0 ;
-(void)_handleReturnedImage:(id)arg0 forSource:(id)arg1 cell:(id)arg2 tableView:(id)arg3 fetchError:(id)arg4 ;
-(void)applicationWillEnterForeground;
-(void)dataSourceDidUpdate;
-(void)didSelectRow:(NSUInteger)arg0 representedByCell:(id)arg1 withCompletion:(id)arg2 ;
-(void)reloadDevices;
-(void)setSourceListDataSource:(id)arg0 ;


@end


#endif