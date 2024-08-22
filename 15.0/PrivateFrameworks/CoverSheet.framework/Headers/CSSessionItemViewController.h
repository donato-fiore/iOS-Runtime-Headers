// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSESSIONITEMVIEWCONTROLLER_H
#define CSSESSIONITEMVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray, CHSWidget, CHSWidgetMetrics;
@protocol CSAdjunctItemHosting;



@interface CSSessionItemViewController : UIViewController <CSAdjunctItemHosting>



@property (nonatomic) CGFloat containerCornerRadius; // ivar: _containerCornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories; // ivar: requiredVisualStyleCategories
@property (readonly) Class superclass;
@property (retain, nonatomic) CHSWidget *widget; // ivar: _widget
@property (retain, nonatomic) CHSWidgetMetrics *widgetMetrics; // ivar: _widgetMetrics
@property (retain, nonatomic) UIViewController *widgetViewController; // ivar: _widgetViewController


-(BOOL)_canShowWhileLocked;
-(id)_newWidgetViewController;
-(struct CGSize )preferredContentSize;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)viewDidLoad;


@end


#endif