// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPRINTMEDIAQUALITYSECTION_H
#define UIPRINTMEDIAQUALITYSECTION_H

@class NSString;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "UIPrintOptionSection.h"
#import "UIPrintFeedFromOption.h"
#import "UIPrintMediaQualityTableViewController.h"
#import "UIPrintMediaTypeOption.h"
#import "UIPrintQualityOption.h"

@interface UIPrintMediaQualitySection : UIPrintOptionSection <UITableViewDelegate, UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIPrintFeedFromOption *feedFromPrintOption; // ivar: _feedFromPrintOption
@property (nonatomic) NSInteger feedFromRow; // ivar: _feedFromRow
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPrintMediaQualityTableViewController *mediaQualitySectionController; // ivar: _mediaQualitySectionController
@property (retain, nonatomic) UIPrintMediaTypeOption *mediaTypePrintOption; // ivar: _mediaTypePrintOption
@property (nonatomic) NSInteger mediaTypeRow; // ivar: _mediaTypeRow
@property (retain, nonatomic) UIPrintQualityOption *qualityPrintOption; // ivar: _qualityPrintOption
@property (nonatomic) NSInteger qualitySection; // ivar: _qualitySection
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)didSelectPrintOptionSection;
-(void)setCurrentPrinter:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updatePrintOptionsList;
-(void)updatePrinterInfo;
-(void)updateSectionSummary:(id)arg0 ;


@end


#endif