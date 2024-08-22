// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTEXTENTRYLAYOUTMANAGER_H
#define CKTEXTENTRYLAYOUTMANAGER_H

@class EMKLayoutManager, NSMutableDictionary, UIColor, NSMutableAttributedString, NSTimer;
@protocol CKTextEntryLayoutManagerMentionsDelegate;



@interface CKTextEntryLayoutManager : EMKLayoutManager

@property (retain, nonatomic) NSMutableDictionary *animationsByIdentifier; // ivar: _animationsByIdentifier
@property (retain, nonatomic) UIColor *currentMentionColor; // ivar: _currentMentionColor
@property (nonatomic) CGSize currentMentionOffset; // ivar: _currentMentionOffset
@property (nonatomic) CGFloat currentMentionScale; // ivar: _currentMentionScale
@property (retain, nonatomic) UIColor *currentMentionShadowColor; // ivar: _currentMentionShadowColor
@property (retain, nonatomic) NSMutableAttributedString *mentionAttributes; // ivar: _mentionAttributes
@property (retain, nonatomic) NSTimer *mentionTimer; // ivar: _mentionTimer
@property (weak, nonatomic) NSObject<CKTextEntryLayoutManagerMentionsDelegate> *mentionsDelegate; // ivar: _mentionsDelegate


-(BOOL)isAnyMentionAnimationActive;
-(id)init;
-(void)drawAttributedMentionGlyphsForGlyphRange:(struct _NSRange )arg0 atPoint:(struct CGPoint )arg1 ;
-(void)drawGlyphsForGlyphRange:(struct _NSRange )arg0 atPoint:(struct CGPoint )arg1 ;
-(void)showCGGlyphs:(*unsigned short)arg0 positions:(struct CGPoint *)arg1 count:(NSInteger)arg2 font:(id)arg3 textMatrix:(struct CGAffineTransform )arg4 attributes:(id)arg5 inContext:(struct CGContext *)arg6 ;
-(void)startTimerIfNeeded;
-(void)stopTimerRemovingAttribute:(BOOL)arg0 ;
-(void)updateDisplayForMentionGlyphRangeRemovingAttribute:(BOOL)arg0 ;
-(void)updateMentionAttributes:(id)arg0 ;
-(void)updateMentionDisplay;


@end


#endif