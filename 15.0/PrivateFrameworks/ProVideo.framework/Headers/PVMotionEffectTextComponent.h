// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVMOTIONEFFECTTEXTCOMPONENT_H
#define PVMOTIONEFFECTTEXTCOMPONENT_H

@class NSArray, NSNumber;
@protocol PVEffectTextual;


#import "PVMotionEffectComponent.h"

@interface PVMotionEffectTextComponent : PVMotionEffectComponent <PVEffectTextual>

 {
    *void _textObjectIDs;
    NSArray *_defaultAttributedStrings;
    NSNumber *_hasEmojiRenderingWorkaround;
    NSNumber *_isTitleCard;
}




+(id)motionEffectPropertyKeyToPublishedParameterNameMap;
-(*void)_textObjectIDs:(*void)arg0 ;
-(BOOL)hasEmojiRenderingWorkaround;
-(BOOL)isRightToLeftWithCurrentLocale;
-(BOOL)isTextFlipped;
-(BOOL)isTitleCard;
-(BOOL)motionEffect:(id)arg0 propertiesDisableCache:(id)arg1 time:(struct ? )arg2 forcePosterFrame:(BOOL)arg3 ;
-(BOOL)motionEffect:(id)arg0 shouldInvalidateCachedRenderForProperty:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 ;
-(BOOL)supportsFlippingText;
-(BOOL)supportsOrientation;
-(id)defaultAttributedString:(NSUInteger)arg0 ;
-(id)initWithMotionEffect:(id)arg0 ;
-(id)motionEffectPropertyKeysThatInvalidateCachedRender:(id)arg0 ;
-(id)textEditingBounds:(struct ? )arg0 ;
-(id)textEditingBoundsAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 useParagraphBounds:(BOOL)arg2 includeDropShadow:(BOOL)arg3 includeMasks:(BOOL)arg4 ;
-(id)textTransformsAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 includeTransformAnimation:(BOOL)arg2 viewSize:(struct CGSize )arg3 viewOrigin:(int)arg4 ;
-(id)textTransformsAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 viewSize:(struct CGSize )arg2 viewOrigin:(int)arg3 ;
-(int)orientation;
-(struct PVCGPointQuad )textCornersAtTime:(struct ? )arg0 index:(NSUInteger)arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 scale:(struct CGPoint )arg4 viewSize:(struct CGSize )arg5 viewOrigin:(int)arg6 ;
-(void)beginEditingTextAtIndex:(unsigned int)arg0 ;
-(void)beginTextEditing;
-(void)dealloc;
-(void)disableRenderingTextObjectAtIndex_NoLock:(unsigned int)arg0 documentInfo:(*void)arg1 ;
-(void)effect:(id)arg0 updateProperties:(id)arg1 allProperties:(id)arg2 ;
-(void)enableRenderingTextObjectAtIndex_NoLock:(unsigned int)arg0 documentInfo:(*void)arg1 ;
-(void)endEditingTextAtIndex:(unsigned int)arg0 ;
-(void)endTextEditing;
-(void)motionEffect:(id)arg0 didBecomeReady:(*void)arg1 properties:(id)arg2 ;
-(void)motionEffect:(id)arg0 willOpenMedia:(*void)arg1 properties:(id)arg2 ;
-(void)motionEffectDidUnload:(id)arg0 ;
-(void)setIsRightToLeft_NoLock:(BOOL)arg0 documentInfo:(*void)arg1 ;
-(void)setupTitleParameters:(id)arg0 allProperties:(id)arg1 documentInfo:(*void)arg2 ;
-(void)storeDefaultStrings:(*void)arg0 ;


@end


#endif