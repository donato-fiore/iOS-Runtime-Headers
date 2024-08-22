// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UICANDIDATEVIEWCONTROLLER_H
#define UICANDIDATEVIEWCONTROLLER_H

@class NSString, NSArray;
@protocol UIPredictiveViewController;


#import "UIViewController.h"
#import "UIView.h"

@interface UICandidateViewController : UIViewController <UIPredictiveViewController>



@property (retain, nonatomic) UIView *candidateView; // ivar: _candidateView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)preferredCandidateBarHeightForTraitCollection:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)hidesExpandableButton;
-(BOOL)isVisibleForInputDelegate:(id)arg0 inputViews:(id)arg1 ;
-(CGFloat)preferredHeightForTraitCollection:(id)arg0 ;
-(NSInteger)overrideUserInterfaceStyle;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif