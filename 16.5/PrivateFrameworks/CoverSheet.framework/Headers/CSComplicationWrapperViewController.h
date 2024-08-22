// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSCOMPLICATIONWRAPPERVIEWCONTROLLER_H
#define CSCOMPLICATIONWRAPPERVIEWCONTROLLER_H

@class UIViewController, UIView, CHUISWidgetHostViewController;



@interface CSComplicationWrapperViewController : UIViewController

@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (readonly, nonatomic) CHUISWidgetHostViewController *widgetHostViewController; // ivar: _widgetHostViewController


-(BOOL)_canShowWhileLocked;
-(id)initWithWidgetHostViewController:(id)arg0 ;
-(void)dealloc;
-(void)viewDidLoad;


@end


#endif