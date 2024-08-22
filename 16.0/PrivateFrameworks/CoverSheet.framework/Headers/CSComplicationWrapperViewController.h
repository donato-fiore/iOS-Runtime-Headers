// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSCOMPLICATIONWRAPPERVIEWCONTROLLER_H
#define CSCOMPLICATIONWRAPPERVIEWCONTROLLER_H

@class UIViewController, CHUISWidgetHostViewController;



@interface CSComplicationWrapperViewController : UIViewController

@property (readonly, nonatomic) CHUISWidgetHostViewController *widgetHostViewController; // ivar: _widgetHostViewController


-(BOOL)_canShowWhileLocked;
-(id)initWithWidgetHostViewController:(id)arg0 ;
-(void)dealloc;
-(void)viewDidLoad;


@end


#endif