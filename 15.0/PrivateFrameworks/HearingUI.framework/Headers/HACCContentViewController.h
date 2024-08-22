// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HACCCONTENTVIEWCONTROLLER_H
#define HACCCONTENTVIEWCONTROLLER_H

@class UIViewController, CCUIContentModuleDetailTransitioningDelegate, NSArray, NSDictionary, UIView<HACCContentModule>, UIViewPropertyAnimator, NSString, UIViewController<CCUIContentModuleContentViewController>, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate, CCUIContentModuleContentViewController;



@interface HACCContentViewController : UIViewController <UIGestureRecognizerDelegate, CCUIContentModuleContentViewController>

 {
    NSUInteger _controlType;
    CCUIContentModuleDetailTransitioningDelegate *_detailTransitioningDelegate;
}


@property (retain, nonatomic) NSArray *availableComfortSoundsAssets; // ivar: _availableComfortSoundsAssets
@property (nonatomic) CGRect collapsedFrame; // ivar: _collapsedFrame
@property (retain, nonatomic) NSDictionary *comfortSoundsDownloadProgress; // ivar: _comfortSoundsDownloadProgress
@property (retain, nonatomic) UIView<HACCContentModule> *contentView; // ivar: _contentView
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIViewController<CCUIContentModuleContentViewController> *expandedViewController; // ivar: _expandedViewController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat preferredExpandedContentHeight; // ivar: preferredExpandedContentHeight
@property (readonly, nonatomic) CGFloat preferredExpandedContentWidth;
@property (readonly, nonatomic) CGFloat preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // ivar: _tapRecognizer


-(BOOL)_canShowWhileLocked;
-(BOOL)supportsExpanding;
-(NSUInteger)controlTypeForModule:(NSUInteger)arg0 ;
-(id)initWithContentModule:(NSUInteger)arg0 andDelegate:(id)arg1 ;
-(id)menuModuleViewControllerForProgramModule:(NSUInteger)arg0 ;
-(id)personalAudioToggleBlockForType:(SEL)arg0 ;
-(id)value;
-(id)viewControllerForExpandedView;
-(void)_handleTapGestureRecognizer:(id)arg0 ;
-(void)_updateMenuItemsForViewController:(id)arg0 ;
-(void)_updatePresentedMenuViewControllerIfNecessary;
-(void)updateValue;
-(void)updateViewConstraints;
-(void)updateWithValue:(id)arg0 ;


@end


#endif