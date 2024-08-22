// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTODOBUTTON_H
#define ICTODOBUTTON_H

@class UIButton, UIColor;


#import "ICTrackedParagraph.h"

@interface ICTodoButton : UIButton

@property (nonatomic) CGSize defaultImageSize; // ivar: _defaultImageSize
@property (nonatomic) CGSize defaultSize; // ivar: _defaultSize
@property (nonatomic, getter=isDone) BOOL done; // ivar: _done
@property (copy, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (weak, nonatomic) ICTrackedParagraph *trackedParagraph; // ivar: _trackedParagraph
@property (nonatomic) BOOL trackedParagraphIsRTL; // ivar: _trackedParagraphIsRTL


-(id)_icaxParentUITextView;
-(id)debugDescription;
-(id)icaxCorrespondingParagraphText;
-(id)imageForChecked:(BOOL)arg0 withHighlight:(BOOL)arg1 ;
-(id)init;
-(id)initWithDragDelegate:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )imageFrame;
-(struct CGRect )imageRectForContentRect:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 leftToRight:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)updateImagesAnimated:(BOOL)arg0 ;
-(void)updateTintColor;
-(void)wasPressed;


@end


#endif