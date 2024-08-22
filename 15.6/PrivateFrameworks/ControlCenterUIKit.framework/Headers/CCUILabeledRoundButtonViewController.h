// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCUILABELEDROUNDBUTTONVIEWCONTROLLER_H
#define CCUILABELEDROUNDBUTTONVIEWCONTROLLER_H

@class UIViewController, UIControl, NSString, UIImage, UIColor;


#import "CCUILabeledRoundButton.h"
#import "CCUICAPackageDescription.h"

@interface CCUILabeledRoundButtonViewController : UIViewController

@property (retain, nonatomic) UIControl *button; // ivar: _button
@property (retain, nonatomic) CCUILabeledRoundButton *buttonContainer; // ivar: _buttonContainer
@property (nonatomic) NSString *contentSizeCategoryThreshold; // ivar: _contentSizeCategoryThreshold
@property (nonatomic, getter=isDynamicLayoutEnabled) BOOL dynamicLayoutEnabled; // ivar: _dynamicLayoutEnabled
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) UIImage *glyphImage; // ivar: _glyphImage
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription; // ivar: _glyphPackageDescription
@property (copy, nonatomic) NSString *glyphState; // ivar: _glyphState
@property (retain, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (retain, nonatomic) UIColor *highlightTintColor; // ivar: _highlightTintColor
@property (nonatomic, getter=isInoperative) BOOL inoperative; // ivar: _inoperative
@property (nonatomic) BOOL labelsVisible; // ivar: _labelsVisible
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL toggleStateOnTap; // ivar: _toggleStateOnTap
@property (nonatomic) BOOL useAlternateBackground; // ivar: _useAlternateBackground
@property (nonatomic) BOOL useLightStyle; // ivar: _useLightStyle


-(BOOL)_canShowWhileLocked;
-(id)initWithGlyphImage:(id)arg0 highlightColor:(id)arg1 ;
-(id)initWithGlyphImage:(id)arg0 highlightColor:(id)arg1 highlightTintColor:(id)arg2 ;
-(id)initWithGlyphImage:(id)arg0 highlightColor:(id)arg1 highlightTintColor:(id)arg2 useLightStyle:(BOOL)arg3 ;
-(id)initWithGlyphImage:(id)arg0 highlightColor:(id)arg1 useLightStyle:(BOOL)arg2 ;
-(id)initWithGlyphPackageDescription:(id)arg0 highlightColor:(id)arg1 ;
-(id)initWithGlyphPackageDescription:(id)arg0 highlightColor:(id)arg1 useLightStyle:(BOOL)arg2 ;
-(id)requiredVisualStyleCategories;
-(void)buttonTapped:(id)arg0 ;
-(void)loadView;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif