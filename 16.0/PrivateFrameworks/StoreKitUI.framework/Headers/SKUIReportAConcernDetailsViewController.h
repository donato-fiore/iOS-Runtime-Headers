// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIREPORTACONCERNDETAILSVIEWCONTROLLER_H
#define SKUIREPORTACONCERNDETAILSVIEWCONTROLLER_H

@class UIViewController, NSString, UITableView;
@protocol UITableViewDelegate;


#import "SKUIReportAConcernConfiguration.h"
#import "SKUIReportAConcernDetailsDataSource.h"
#import "SKUIReportAConcernMetadata.h"

@interface SKUIReportAConcernDetailsViewController : UIViewController <UITableViewDelegate>



@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) SKUIReportAConcernConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) SKUIReportAConcernDetailsDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat keyboardHeight; // ivar: _keyboardHeight
@property (retain, nonatomic) SKUIReportAConcernMetadata *metadata; // ivar: _metadata
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(CGFloat)_detailsCellHeight;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(id)_detailsText;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)dealloc;
-(void)submitPressed:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif