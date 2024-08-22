// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OBBASEWELCOMECONTROLLER_H
#define OBBASEWELCOMECONTROLLER_H

@class UIViewController;



@interface OBBaseWelcomeController : UIViewController

@property (nonatomic) NSUInteger templateType; // ivar: _templateType


+(struct CGSize )preferredContentSize;
-(CGFloat)autoScrollEdgeTransitionDistance;
-(NSInteger)navigationBarScrollToEdgeBehavior;
-(id)navigationItem;
-(struct CGSize )preferredContentSize;
-(struct NSDirectionalEdgeInsets )directionalLayoutMargins;
-(struct NSDirectionalEdgeInsets )insetsForTemplateType:(NSUInteger)arg0 ;
-(void)_applyChromelessToBar:(NSInteger)arg0 navigationItem:(id)arg1 ;
-(void)_presentationStyleValidationCheck;
-(void)loadView;
-(void)updateDirectionalLayoutMargins;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif