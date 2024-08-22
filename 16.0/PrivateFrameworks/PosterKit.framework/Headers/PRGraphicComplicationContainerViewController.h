// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRGRAPHICCOMPLICATIONCONTAINERVIEWCONTROLLER_H
#define PRGRAPHICCOMPLICATIONCONTAINERVIEWCONTROLLER_H

@class UIViewController, NSMutableDictionary, NSArray, NSString, BSUIVibrancyConfiguration;
@protocol PRComplicationWrapperViewControllerDelegate, UIDragInteractionDelegate, UIDropInteractionDelegate, BSInvalidatable, UIDropSession, PRGraphicComplicationContainerViewControllerDelegate;


#import "PRComplicationWrapperViewController.h"

@interface PRGraphicComplicationContainerViewController : UIViewController <PRComplicationWrapperViewControllerDelegate, UIDragInteractionDelegate, UIDropInteractionDelegate, BSInvalidatable>

 {
    id<UIDropSession> *_activeDropSession;
    NSMutableDictionary *_widgetViewControllersByUniqueIdentifier;
    PRComplicationWrapperViewController *_prewarmedComplicationWrapperViewController;
    NSUInteger _lastProposedDropOperation;
}


@property (retain, nonatomic) NSArray *complicationDescriptors; // ivar: _complicationDescriptors
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRGraphicComplicationContainerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFocused) BOOL focused; // ivar: _focused
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration; // ivar: _vibrancyConfiguration


-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(id)_complicationLayout;
-(id)_hostViewControllerForComplicationDescriptor:(id)arg0 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)dropInteraction:(id)arg0 previewForDroppingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)initWithComplicationDescriptors:(id)arg0 ;
-(void)_addDescriptor:(id)arg0 atIndex:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)_addHostViewControllerForDescriptor:(id)arg0 animated:(BOOL)arg1 ;
-(void)_removeDescriptor:(id)arg0 ;
-(void)_tapGestureRecognized:(id)arg0 ;
-(void)_updateComplicationLayoutAnimated:(BOOL)arg0 ;
-(void)cancelPrewarmComplicationDescriptor:(id)arg0 ;
-(void)complicationWrapperViewControllerDidTapComplication:(id)arg0 ;
-(void)complicationWrapperViewControllerDidTapRemove:(id)arg0 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)dropInteraction:(id)arg0 concludeDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 item:(id)arg1 willAnimateDropWithAnimator:(id)arg2 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnd:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnter:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidExit:(id)arg1 ;
-(void)invalidate;
-(void)loadView;
-(void)prewarmComplicationDescriptor:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif