// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDFIXEDCHARTVIEWCONTROLLER_H
#define WDFIXEDCHARTVIEWCONTROLLER_H

@class HKTableViewController, HKInteractiveChartViewController, NSString, HKValueRange, HKDataMetadataDetailSection;
@protocol WDUserActivityResponder;



@interface WDFixedChartViewController : HKTableViewController <WDUserActivityResponder>



@property (readonly, nonatomic) HKInteractiveChartViewController *chartController; // ivar: _chartController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKValueRange *fixedRange; // ivar: _fixedRange
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKDataMetadataDetailSection *metadataSection; // ivar: _metadataSection
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)applyTransitionActivity:(id)arg0 ;
-(id)cellForChart;
-(id)initWithInteractiveChartViewController:(id)arg0 sessionSample:(id)arg1 profile:(id)arg2 title:(id)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)applyChangeActivity:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif