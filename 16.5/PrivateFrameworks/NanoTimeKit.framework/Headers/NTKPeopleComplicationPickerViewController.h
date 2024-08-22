// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKPEOPLECOMPLICATIONPICKERVIEWCONTROLLER_H
#define NTKPEOPLECOMPLICATIONPICKERVIEWCONTROLLER_H

@class UIViewController, NSString, UITableView;
@protocol UITableViewDelegate, NTKPeopleComplicationPickerViewControllerDelegate;


#import "NTKComplicationPickerDetailViewConfiguration.h"
#import "NTKPeopleDetailComplicationPickerDataSource.h"

@interface NTKPeopleComplicationPickerViewController : UIViewController <UITableViewDelegate>



@property (retain, nonatomic) NTKComplicationPickerDetailViewConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NTKPeopleDetailComplicationPickerDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKPeopleComplicationPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFirstTimeVisible; // ivar: _isFirstTimeVisible
@property (retain, nonatomic) NSString *parentSectionName; // ivar: _parentSectionName
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(id)initWithDetailConfiguration:(id)arg0 ;
-(void)_didSelectItemAtIndexPath:(id)arg0 ;
-(void)scrollToSelectedIdentifierAnimated:(BOOL)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif