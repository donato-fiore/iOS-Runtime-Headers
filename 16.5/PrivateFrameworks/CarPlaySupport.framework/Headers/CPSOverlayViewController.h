// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSOVERLAYVIEWCONTROLLER_H
#define CPSOVERLAYVIEWCONTROLLER_H

@class UINavigationController, NSString, UIFocusGuide, _UINonHostingVisibilityPropagationView;
@protocol CPSPreferredFocusManaging, BSInvalidatable, UIFocusItem;



@interface CPSOverlayViewController : UINavigationController <CPSPreferredFocusManaging, BSInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int pid; // ivar: _pid
@property (weak, nonatomic) NSObject<UIFocusItem> *preferredFocusItem; // ivar: preferredFocusItem
@property (readonly, nonatomic) UIFocusGuide *rightHandDriveGuide; // ivar: _rightHandDriveGuide
@property (readonly) Class superclass;
@property (nonatomic) BOOL usePreferredItemOnNextUpdate; // ivar: usePreferredItemOnNextUpdate
@property (retain, nonatomic) _UINonHostingVisibilityPropagationView *visibilityView; // ivar: _visibilityView


-(BOOL)_needsVisibilityView;
-(BOOL)_useRightHandDriveFocusGuide;
-(BOOL)restoresFocusAfterTransition;
-(BOOL)shouldHideNavigationBarForViewController:(id)arg0 ;
-(NSUInteger)indexOfTemplate:(id)arg0 ;
-(id)_firstFocusProvidingForViewController:(id)arg0 ;
-(id)_linearFocusMovementSequences;
-(id)popToRootViewControllerAnimated:(BOOL)arg0 ;
-(id)popToViewController:(id)arg0 animated:(BOOL)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg0 ;
-(id)preferredFocusEnvironments;
-(id)presentedTemplateViewController;
-(id)templates;
-(id)topTemplate;
-(id)viewControllerForTemplate:(id)arg0 ;
-(void)_invalidateVisibilityView;
-(void)_updateVisibilityView;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)dismissTemplateAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)popTemplateAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)popToRootTemplateAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)popToTemplate:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentActionSheetTemplate:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentTemplateViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)pushTemplateViewController:(id)arg0 animated:(BOOL)arg1 presentationStyle:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)setViewControllers:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateVisibilityForPid:(int)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif