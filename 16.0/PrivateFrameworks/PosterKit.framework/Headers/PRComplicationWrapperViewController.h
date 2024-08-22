// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRCOMPLICATIONWRAPPERVIEWCONTROLLER_H
#define PRCOMPLICATIONWRAPPERVIEWCONTROLLER_H

@class UIViewController, UIView, BSUIVibrancyConfiguration, CHUISWidgetHostViewController;
@protocol PRComplicationWrapperViewControllerDelegate;


#import "PREditingMinusCloseBoxButton.h"
#import "PRComplicationDescriptor.h"

@interface PRComplicationWrapperViewController : UIViewController {
    UIView *_backgroundView;
    PREditingMinusCloseBoxButton *_removeButton;
}


@property (nonatomic, getter=isBackgroundHidden) BOOL backgroundHidden; // ivar: _backgroundHidden
@property (readonly, nonatomic) PRComplicationDescriptor *complicationDescriptor; // ivar: _complicationDescriptor
@property (weak, nonatomic) NSObject<PRComplicationWrapperViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration; // ivar: _vibrancyConfiguration
@property (readonly, nonatomic) CHUISWidgetHostViewController *widgetHostViewController; // ivar: _widgetHostViewController


-(id)initWithComplicationDescriptor:(id)arg0 ;
-(void)_removeButtonTapped;
-(void)_tapGestureRecognized:(id)arg0 ;
-(void)loadView;
-(void)viewDidLoad;


@end


#endif