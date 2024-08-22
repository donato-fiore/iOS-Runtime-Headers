// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCUITOGGLEVIEWCONTROLLER_H
#define CCUITOGGLEVIEWCONTROLLER_H

@class UIImageView, UIImage, UIColor, NSString, UIViewPropertyAnimator;
@protocol CCUIContentModuleContentViewController;


#import "CCUIButtonModuleViewController.h"
#import "CCUICAPackageDescription.h"
#import "CCUIToggleModule.h"

@interface CCUIToggleViewController : CCUIButtonModuleViewController <CCUIContentModuleContentViewController>

 {
    UIImageView *_glyphImageView;
    UIImage *_glyphImage;
    UIImage *_selectedGlyphImage;
    UIColor *_selectedColor;
    CCUICAPackageDescription *_glyphPackageDescription;
    NSString *_glyphState;
}


@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) CCUIToggleModule *module; // ivar: _module
@property (readonly, nonatomic) CGFloat preferredExpandedContentHeight;
@property (readonly, nonatomic) CGFloat preferredExpandedContentWidth;
@property (readonly, nonatomic) CGFloat preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldFinishTransitionToExpandedContentModule;
-(void)buttonTapped:(id)arg0 forEvent:(id)arg1 ;
-(void)reconfigureView;
-(void)refreshState;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif