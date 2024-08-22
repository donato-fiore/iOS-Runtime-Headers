// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIACTIVITYUSERDEFAULTSDATASOURCE_H
#define _UIACTIVITYUSERDEFAULTSDATASOURCE_H

@class UITableViewDiffableDataSource;
@protocol _UIActivityUserDefaultsDataSourceProxy;



@interface _UIActivityUserDefaultsDataSource : UITableViewDiffableDataSource

@property (weak, nonatomic) NSObject<_UIActivityUserDefaultsDataSourceProxy> *dataSourceProxy; // ivar: _dataSourceProxy


-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;


@end


#endif