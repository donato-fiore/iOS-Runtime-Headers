// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKBIGEMOJIBALLOONVIEW_H
#define CKBIGEMOJIBALLOONVIEW_H



#import "CKTextBalloonView.h"

@interface CKBigEmojiBalloonView : CKTextBalloonView



-(BOOL)hasBackground;
-(Class)invisibleInkEffectViewClass;
-(id)accessibilityIdentifier;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)addFilter:(id)arg0 ;
-(void)attachInvisibleInkEffectView;
-(void)clearFilters;
-(void)detachInvisibleInkEffectView;
-(void)invisibleInkEffectViewWasUncovered;
-(void)setGradientReferenceView:(id)arg0 ;
-(void)setHasOverlay:(BOOL)arg0 autoDismiss:(BOOL)arg1 ;
-(void)setImage:(id)arg0 ;


@end


#endif