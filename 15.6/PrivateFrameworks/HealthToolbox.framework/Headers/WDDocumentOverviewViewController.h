// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDDOCUMENTOVERVIEWVIEWCONTROLLER_H
#define WDDOCUMENTOVERVIEWVIEWCONTROLLER_H

@class HKTableViewController, UIFont, NSString, HKDisplayType, NSMutableArray;
@protocol WDUserActivityResponder;


#import "WDDocumentListDataProvider.h"
#import "WDProfile.h"

@interface WDDocumentOverviewViewController : HKTableViewController <WDUserActivityResponder>



@property (retain, nonatomic) UIFont *bodyFont; // ivar: _bodyFont
@property (readonly, nonatomic) WDDocumentListDataProvider *dataProvider; // ivar: _dataProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKDisplayType *displayType; // ivar: _displayType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WDProfile *profile; // ivar: _profile
@property (retain, nonatomic) NSMutableArray *reportRowTypes; // ivar: _reportRowTypes
@property (retain, nonatomic) NSMutableArray *sectionTypes; // ivar: _sectionTypes
@property (readonly) Class superclass;
@property (nonatomic) NSInteger totalReportCount; // ivar: _totalReportCount


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)_reportSectionEstimatedRowHeight:(NSInteger)arg0 ;
-(CGFloat)_reportSectionRowHeight:(NSInteger)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_descriptionSectionCellForTableView:(id)arg0 row:(NSInteger)arg1 ;
-(id)_reportAccessCellForTableView:(id)arg0 forIndexPath:(id)arg1 ;
-(id)_reportItemCellForTableView:(id)arg0 row:(NSInteger)arg1 ;
-(id)_reportSectionCellForTableView:(id)arg0 forIndexPath:(id)arg1 ;
-(id)_reportShowAllCellForTableView:(id)arg0 forIndexPath:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg0 ;
-(id)initWithDisplayTypes:(id)arg0 profile:(id)arg1 title:(id)arg2 category:(id)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_installSections;
-(void)_pushAccessViewController;
-(void)_pushReportDetailViewControllerForIndexPath:(id)arg0 ;
-(void)_pushShowAllViewController;
-(void)_recomputeTotalReportCount;
-(void)_reloadAllData;
-(void)_selectReportRowForIndexPath:(id)arg0 ;
-(void)_updateActivityForViewDidAppear;
-(void)applyChangeActivity:(id)arg0 ;
-(void)dealloc;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif