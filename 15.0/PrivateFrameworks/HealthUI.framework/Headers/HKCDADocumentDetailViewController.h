// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCDADOCUMENTDETAILVIEWCONTROLLER_H
#define HKCDADOCUMENTDETAILVIEWCONTROLLER_H

@class UIViewController, UIBarButtonItem, UIStackView;


#import "HKCDADocumentReportViewController.h"
#import "HKLargePlainTextViewController.h"
#import "_HKReportSegmentControl.h"
#import "HKBarButtonItemControl.h"

@interface HKCDADocumentDetailViewController : UIViewController

@property (readonly, nonatomic) HKCDADocumentReportViewController *formattedReportController; // ivar: _formattedReportController
@property (readonly, nonatomic) HKLargePlainTextViewController *plainTextReportController; // ivar: _plainTextReportController
@property (readonly, nonatomic) _HKReportSegmentControl *reportSegmentControl; // ivar: _reportSegmentControl
@property (readonly, nonatomic) UIBarButtonItem *searchButton; // ivar: _searchButton
@property (readonly, nonatomic) HKBarButtonItemControl *searchInSegmentControl; // ivar: _searchInSegmentControl
@property (readonly, nonatomic) UIStackView *stackView; // ivar: _stackView


-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithReportData:(id)arg0 ;
-(void)_replaceLastArrangedViewWith:(id)arg0 ;
-(void)changeReportDisplayed:(id)arg0 ;
-(void)searchButtonAction:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif