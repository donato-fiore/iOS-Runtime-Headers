// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICOMPATIBILITYPREDICTIVEVIEWCONTROLLER_H
#define UICOMPATIBILITYPREDICTIVEVIEWCONTROLLER_H

@class NSString, NSArray;
@protocol UIPredictiveViewController;


#import "UIViewController.h"
#import "UIView.h"

@interface UICompatibilityPredictiveViewController : UIViewController <UIPredictiveViewController>



@property (retain, nonatomic) UIView *customView; // ivar: _customView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)hidesExpandableButton;
-(BOOL)isVisibleForInputDelegate:(id)arg0 inputViews:(id)arg1 ;
-(CGFloat)preferredHeightForTraitCollection:(id)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif