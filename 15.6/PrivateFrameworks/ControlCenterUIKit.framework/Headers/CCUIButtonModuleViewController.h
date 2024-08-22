// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCUIBUTTONMODULEVIEWCONTROLLER_H
#define CCUIBUTTONMODULEVIEWCONTROLLER_H

@class UIViewController, UIViewPropertyAnimator, NSString, UIColor, UIImage;
@protocol CCUIContentModuleContentViewController;


#import "CCUIButtonModuleView.h"
#import "CCUICAPackageDescription.h"

@interface CCUIButtonModuleViewController : UIViewController <CCUIContentModuleContentViewController>

 {
    CCUIButtonModuleView *_buttonModuleView;
}


@property (readonly, nonatomic) CCUIButtonModuleView *buttonView;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (retain, nonatomic) UIColor *glyphColor;
@property (retain, nonatomic) UIImage *glyphImage;
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription;
@property (nonatomic) CGFloat glyphScale;
@property (copy, nonatomic) NSString *glyphState;
@property (readonly, nonatomic) BOOL hasGlyph;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat preferredExpandedContentHeight;
@property (readonly, nonatomic) CGFloat preferredExpandedContentWidth;
@property (readonly, nonatomic) CGFloat preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (retain, nonatomic) UIColor *selectedGlyphColor;
@property (retain, nonatomic) UIImage *selectedGlyphImage;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly) Class superclass;


-(void)_buttonTapped:(id)arg0 forEvent:(id)arg1 ;
-(void)_buttonTouchDown:(id)arg0 forEvent:(id)arg1 ;
-(void)buttonTapped:(id)arg0 forEvent:(id)arg1 ;
-(void)buttonTouchDown:(id)arg0 forEvent:(id)arg1 ;
-(void)didTransitionToExpandedContentMode:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)willTransitionToExpandedContentMode:(BOOL)arg0 ;


@end


#endif