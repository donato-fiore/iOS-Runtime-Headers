// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNOTEEDITORTOOLBARDISCLOSUREVIEW_H
#define ICNOTEEDITORTOOLBARDISCLOSUREVIEW_H

@class UIView, UIImageView, UIColor;


#import "ICNoteEditorToolbarPlusView.h"

@interface ICNoteEditorToolbarDisclosureView : UIView

@property (retain, nonatomic) UIImageView *closeImageView; // ivar: _closeImageView
@property (nonatomic) BOOL closeState; // ivar: _closeState
@property (readonly, nonatomic) UIColor *itemColor;
@property (retain, nonatomic) ICNoteEditorToolbarPlusView *openView; // ivar: _openView


-(BOOL)isAccessibilityElement;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;


@end


#endif