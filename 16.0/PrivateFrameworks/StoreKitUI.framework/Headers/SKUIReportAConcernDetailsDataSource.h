// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIREPORTACONCERNDETAILSDATASOURCE_H
#define SKUIREPORTACONCERNDETAILSDATASOURCE_H

@class NSString, UITableView;
@protocol UITableViewDataSource;

#import <Foundation/Foundation.h>


@interface SKUIReportAConcernDetailsDataSource : NSObject <UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *placeholder; // ivar: _placeholder
@property (copy, nonatomic) NSString *privacyNote; // ivar: _privacyNote
@property (copy, nonatomic) NSString *selectedReason; // ivar: _selectedReason
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)initWithTableView:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;


@end


#endif