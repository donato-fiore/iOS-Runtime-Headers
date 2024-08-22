// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRINLINECOMPLICATIONCONTAINERVIEWCONTROLLER_H
#define PRINLINECOMPLICATIONCONTAINERVIEWCONTROLLER_H

@class UIViewController, CHUISWidgetHostViewController, NSString, BSUIVibrancyConfiguration;
@protocol BSInvalidatable, PRInlineComplicationContainerViewControllerDelegate;


#import "PRComplicationDescriptor.h"

@interface PRInlineComplicationContainerViewController : UIViewController <BSInvalidatable>

 {
    CHUISWidgetHostViewController *_hostViewController;
}


@property (retain, nonatomic) PRComplicationDescriptor *complicationDescriptor; // ivar: _complicationDescriptor
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRInlineComplicationContainerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFocused) BOOL focused; // ivar: _focused
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration; // ivar: _vibrancyConfiguration


-(id)initWithComplicationDescriptor:(id)arg0 ;
-(void)_tapGestureRecognized:(id)arg0 ;
-(void)invalidate;
-(void)viewDidLoad;


@end


#endif