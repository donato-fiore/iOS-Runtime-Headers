// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICOLORWELL_H
#define UICOLORWELL_H

@class NSString;
@protocol UIDragInteractionDelegate, UIDropInteractionDelegate, UIColorPickerViewControllerDelegate, _UIColorWellControl;


#import "UIControl.h"
#import "_UIColorWellVisualStyle.h"
#import "UIColorPickerViewController.h"
#import "UIDragInteraction.h"
#import "UIDropInteraction.h"
#import "UIColor.h"

@interface UIColorWell : UIControl <UIDragInteractionDelegate, UIDropInteractionDelegate, UIColorPickerViewControllerDelegate, _UIColorWellControl>

 {
    _UIColorWellVisualStyle *_style;
    UIColorPickerViewController *_colorPicker;
    UIDragInteraction *_dragInteraction;
    UIDropInteraction *_dropInteraction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *selectedColor; // ivar: _selectedColor
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsAlpha; // ivar: _supportsAlpha
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)styleForColorWell:(id)arg0 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(NSUInteger)_controlEventsForActionTriggered;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_commonInit;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)colorPickerViewControllerDidSelectColor:(id)arg0 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)setPickerTitle:(id)arg0 ;
-(void)styleDidSelectColor:(id)arg0 ;
-(void)styleRequestedColorPickerPresentation;


@end


#endif