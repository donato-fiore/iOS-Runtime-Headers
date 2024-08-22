// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFATOMLAYOUTVIEW_H
#define _MFATOMLAYOUTVIEW_H

@class UIView, UIView<MFAtomTextViewAtomLayout>;



@interface _MFAtomLayoutView : UIView

@property (readonly, nonatomic) UIEdgeInsets atomInsets;
@property (retain, nonatomic) UIView<MFAtomTextViewAtomLayout> *delegateView; // ivar: _delegateView


+(id)layoutViewWithDelegateView:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDelegateView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)viewForLastBaselineLayout;
-(struct CGRect )boundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSUInteger)arg3 ;
-(struct CGRect )selectionBounds;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setMaskBounds:(struct CGRect )arg0 ;


@end


#endif