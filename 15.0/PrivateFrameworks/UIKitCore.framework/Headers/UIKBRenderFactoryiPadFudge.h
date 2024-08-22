// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBRENDERFACTORYIPADFUDGE_H
#define UIKBRENDERFACTORYIPADFUDGE_H



#import "UIKBRenderFactoryiPad.h"

@interface UIKBRenderFactoryiPadFudge : UIKBRenderFactoryiPad



-(BOOL)iPadFudgeLayout;
-(BOOL)supportsInputTraits:(id)arg0 forKeyplane:(id)arg1 ;
-(CGFloat)_row4ControlSegmentWidthLeft;
-(CGFloat)_row4ControlSegmentWidthRight;
-(CGFloat)controlKeyFontSize;
-(CGFloat)deleteKeyFontSize;
-(CGFloat)dualStringKeyBottomFontSize:(NSUInteger)arg0 ;
-(CGFloat)dualStringKeyTopFontSize:(NSUInteger)arg0 ;
-(CGFloat)moreKeyFontSize;
-(CGFloat)spaceKeyFontSize;
-(CGFloat)stringKeyFontSize:(NSUInteger)arg0 ;
-(CGFloat)symbolImageControlKeyFontSize;
-(NSUInteger)_isFullHeightKeyFor:(id)arg0 onKeyplane:(id)arg1 ;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)capslockKeyImageName;
-(id)deleteKeyImageName;
-(id)deleteOnKeyImageName;
-(id)dictationKeyImageName;
-(id)dismissKeyImageName;
-(id)displayContentsForKey:(id)arg0 ;
-(id)globalEmojiKeyImageName;
-(id)globalKeyImageName;
-(id)lightKeycapsFontName;
-(id)messagesWriteboardKeyImageName;
-(id)returnKeyImageName;
-(id)shiftKeyImageName;
-(id)shiftLockImageName;
-(id)shiftOnKeyImageName;
-(id)tabKeyImageName;
-(struct CGPoint )deleteKeyOffset:(NSUInteger)arg0 ;
-(struct CGPoint )dictationKeyOffset;
-(struct CGPoint )dismissKeyOffset;
-(struct CGPoint )dualStringKeyBottomTextOffset:(NSUInteger)arg0 ;
-(struct CGPoint )dualStringKeyBottomTextOffset:(id)arg0 keyplane:(id)arg1 ;
-(struct CGPoint )dualStringKeyTopTextOffset:(NSUInteger)arg0 ;
-(struct CGPoint )dualStringKeyTopTextOffset:(id)arg0 keyplane:(id)arg1 ;
-(struct CGPoint )iPadFudgeControlKeyOffset;
-(struct CGPoint )internationalKeyOffset;
-(struct CGPoint )moreKeyOffset;
-(struct CGPoint )stringKeyOffset:(NSUInteger)arg0 ;
-(struct CGPoint )symbolImageControlKeyOffset;
-(struct CGSize )defaultVariantGeometrySize;
-(void)_customizeGeometry:(id)arg0 forKey:(id)arg1 contents:(id)arg2 ;


@end


#endif