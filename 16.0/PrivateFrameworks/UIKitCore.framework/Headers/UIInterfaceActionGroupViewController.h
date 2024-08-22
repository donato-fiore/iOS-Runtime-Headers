// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINTERFACEACTIONGROUPVIEWCONTROLLER_H
#define UIINTERFACEACTIONGROUPVIEWCONTROLLER_H

@class NSString;
@protocol UIInterfaceActionHandlerInvocationDelegate, UIInterfaceActionGroupDisplaying, UISpringLoadedInteractionSupporting, UIInterfaceActionVisualStyleProviding;


#import "UIViewController.h"
#import "UIInterfaceActionGroup.h"
#import "UIInterfaceActionGroupView.h"
#import "UIInterfaceActionVisualStyle.h"

@interface UIInterfaceActionGroupViewController : UIViewController <UIInterfaceActionHandlerInvocationDelegate, UIInterfaceActionGroupDisplaying, UISpringLoadedInteractionSupporting>



@property (readonly, copy, nonatomic) UIInterfaceActionGroup *actionGroup; // ivar: _actionGroup
@property (readonly, copy, nonatomic) UIInterfaceActionGroupView *actionGroupView; // ivar: _actionGroupView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isSpringLoaded) BOOL springLoaded; // ivar: _springLoaded
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
@property (weak, nonatomic) NSObject<UIInterfaceActionVisualStyleProviding> *visualStyleProvider; // ivar: _visualStyleProvider


-(id)defaultVisualStyleForTraitCollection:(id)arg0 presentationStyle:(NSInteger)arg1 ;
-(id)initWithActionGroup:(id)arg0 ;
// -(void)interfaceAction:(id)arg0 invokeActionHandler:(id)arg1 completion:(unk)arg2  ;
-(void)loadView;
-(void)reloadVisualStyle;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif