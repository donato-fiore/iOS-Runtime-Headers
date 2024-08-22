// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRINTMEDIAQUALITYSECTION_H
#define UIPRINTMEDIAQUALITYSECTION_H

@class NSString, UITableViewController;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "UIPrintOptionSection.h"
#import "UIPrintFeedFromOption.h"
#import "UIPrintMediaTypeOption.h"
#import "UIPrintQualityOption.h"

@interface UIPrintMediaQualitySection : UIPrintOptionSection <UITableViewDelegate, UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIPrintFeedFromOption *feedFromPrintOption; // ivar: _feedFromPrintOption
@property (nonatomic) NSInteger feedFromRow; // ivar: _feedFromRow
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITableViewController *mediaQualitySectionController; // ivar: _mediaQualitySectionController
@property (retain, nonatomic) UIPrintMediaTypeOption *mediaTypePrintOption; // ivar: _mediaTypePrintOption
@property (nonatomic) NSInteger mediaTypeRow; // ivar: _mediaTypeRow
@property (retain, nonatomic) UIPrintQualityOption *qualityPrintOption; // ivar: _qualityPrintOption
@property (nonatomic) NSInteger qualitySectionNum; // ivar: _qualitySectionNum
@property (readonly) Class superclass;


-(BOOL)updatePrintOptionsList;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)currentPrinterChanged;
-(void)dealloc;
-(void)didSelectPrintOptionSection;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif