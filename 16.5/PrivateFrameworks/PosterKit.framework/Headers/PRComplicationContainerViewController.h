// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRCOMPLICATIONCONTAINERVIEWCONTROLLER_H
#define PRCOMPLICATIONCONTAINERVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString, BSUIVibrancyConfiguration;
@protocol PRGraphicComplicationContainerViewControllerDelegate, PRInlineComplicationContainerViewControllerDelegate, BSInvalidatable, PRComplicationContainerViewControllerDelegate;


#import "PRInlineComplicationContainerViewController.h"
#import "PRGraphicComplicationContainerViewController.h"
#import "PRComplicationDescriptor.h"

@interface PRComplicationContainerViewController : UIViewController <PRGraphicComplicationContainerViewControllerDelegate, PRInlineComplicationContainerViewControllerDelegate, BSInvalidatable>

 {
    PRInlineComplicationContainerViewController *_inlineComplicationContainerViewController;
    PRGraphicComplicationContainerViewController *_graphicComplicationContainerViewController;
}


@property (retain, nonatomic) NSArray *complicationDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRComplicationContainerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger focusedElement; // ivar: _focusedElement
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PRComplicationDescriptor *inlineComplicationDescriptor;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesEditingLayout; // ivar: _usesEditingLayout
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration; // ivar: _vibrancyConfiguration


-(BOOL)graphicComplicationContainerViewController:(id)arg0 canAddComplication:(id)arg1 ;
-(id)initWithInlineComplicationDescriptor:(id)arg0 graphicComplicationDescriptors:(id)arg1 ;
-(void)_updateFocusedWithAnimationSettings:(id)arg0 ;
-(void)cancelPrewarmComplicationDescriptor:(id)arg0 ;
-(void)graphicComplicationContainerViewController:(id)arg0 didCancelDropOperationForComplication:(id)arg1 ;
-(void)graphicComplicationContainerViewController:(id)arg0 didDropComplication:(id)arg1 atIndex:(NSInteger)arg2 ;
-(void)graphicComplicationContainerViewController:(id)arg0 didRemoveComplication:(id)arg1 ;
-(void)graphicComplicationContainerViewController:(id)arg0 didTapComplication:(id)arg1 ;
-(void)graphicComplicationContainerViewControllerDidTapAdd:(id)arg0 ;
-(void)inlineComplicationContainerViewController:(id)arg0 didEditComplication:(id)arg1 ;
-(void)inlineComplicationContainerViewControllerDidTapAdd:(id)arg0 ;
-(void)invalidate;
-(void)loadView;
-(void)prewarmComplicationDescriptor:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif