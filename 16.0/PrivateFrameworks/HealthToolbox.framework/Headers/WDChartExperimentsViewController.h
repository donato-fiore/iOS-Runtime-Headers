// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDCHARTEXPERIMENTSVIEWCONTROLLER_H
#define WDCHARTEXPERIMENTSVIEWCONTROLLER_H

@class NSString;
@protocol WDUserActivityResponder;


#import "WDHealthTableViewController.h"

@interface WDChartExperimentsViewController : WDHealthTableViewController <WDUserActivityResponder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)tableViewSectionClasses;
-(id)applyTransitionActivity:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 profile:(id)arg1 ;
-(void)applyChangeActivity:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif