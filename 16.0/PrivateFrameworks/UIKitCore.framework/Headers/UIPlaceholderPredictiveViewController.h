// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPLACEHOLDERPREDICTIVEVIEWCONTROLLER_H
#define UIPLACEHOLDERPREDICTIVEVIEWCONTROLLER_H

@class NSString, NSArray;
@protocol UIPredictiveViewController;


#import "UIViewController.h"

@interface UIPlaceholderPredictiveViewController : UIViewController <UIPredictiveViewController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)_isVisibleForAutocorrectionType:(NSInteger)arg0 ;
-(BOOL)hidesExpandableButton;
-(BOOL)isVisibleForInputDelegate:(id)arg0 inputViews:(id)arg1 ;
-(CGFloat)preferredHeightForTraitCollection:(id)arg0 ;


@end


#endif