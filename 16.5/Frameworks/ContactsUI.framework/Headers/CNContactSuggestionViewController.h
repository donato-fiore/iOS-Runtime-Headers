// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTSUGGESTIONVIEWCONTROLLER_H
#define CNCONTACTSUGGESTIONVIEWCONTROLLER_H

@class UITableViewController, UIButton, NSLayoutConstraint, UILabel;
@protocol CNContactSuggestionViewControllerDataSource;


#import "CNPropertySuggestionAction.h"
#import "CNPropertyCell.h"

@interface CNContactSuggestionViewController : UITableViewController

@property (retain, nonatomic) CNPropertySuggestionAction *action; // ivar: _action
@property (retain, nonatomic) UIButton *addToContactButton; // ivar: _addToContactButton
@property (retain, nonatomic) NSLayoutConstraint *addToContactLeadingMargin; // ivar: _addToContactLeadingMargin
@property (retain, nonatomic) NSLayoutConstraint *addToContactTrailingMargin; // ivar: _addToContactTrailingMargin
@property (retain, nonatomic) UILabel *contentLabel; // ivar: _contentLabel
@property (retain, nonatomic) NSObject<CNContactSuggestionViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) UILabel *dateLabel; // ivar: _dateLabel
@property (retain, nonatomic) NSLayoutConstraint *dateTrailingMargin; // ivar: _dateTrailingMargin
@property (retain, nonatomic) NSLayoutConstraint *fromLeadingMargin; // ivar: _fromLeadingMargin
@property (retain, nonatomic) UIButton *ignoreButton; // ivar: _ignoreButton
@property (retain, nonatomic) NSLayoutConstraint *ignoreLeadingMargin; // ivar: _ignoreLeadingMargin
@property (retain, nonatomic) NSLayoutConstraint *ignoreTrailingMargin; // ivar: _ignoreTrailingMargin
@property (retain, nonatomic) CNPropertyCell *propertyCell; // ivar: _propertyCell
@property (retain, nonatomic) UILabel *subjectLabel; // ivar: _subjectLabel
@property (retain, nonatomic) UILabel *withLabel; // ivar: _withLabel


+(id)viewControllerWithDataSource:(id)arg0 ;
-(BOOL)shouldShowAddRejectActions;
-(BOOL)shouldShowPreview;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)alertMessageForIgnoreContactDetail;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)titleForIgnoreContactDetail;
-(void)addToContact:(id)arg0 ;
-(void)ignore:(id)arg0 ;
-(void)showSource:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updatePreview;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif