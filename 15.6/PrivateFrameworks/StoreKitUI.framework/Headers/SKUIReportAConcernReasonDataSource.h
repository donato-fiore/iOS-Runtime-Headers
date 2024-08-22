// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIREPORTACONCERNREASONDATASOURCE_H
#define SKUIREPORTACONCERNREASONDATASOURCE_H

@class NSString, NSArray, UITableView;
@protocol UITableViewDataSource;

#import <Foundation/Foundation.h>


@interface SKUIReportAConcernReasonDataSource : NSObject <UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *reasons; // ivar: _reasons
@property (copy, nonatomic) NSString *selectReasonSubtitle; // ivar: _selectReasonSubtitle
@property (copy, nonatomic) NSString *selectReasonTitle; // ivar: _selectReasonTitle
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