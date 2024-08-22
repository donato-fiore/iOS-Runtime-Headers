// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDTEXTUREDESCRIPTION_H
#define TSDTEXTUREDESCRIPTION_H

@protocol NSCopying, TSDAnimationSession;

#import <Foundation/Foundation.h>


@interface TSDTextureDescription : NSObject <NSCopying>

 {
    BOOL _shouldNotAddShapeAttributes;
}


@property (nonatomic) int byGlyphStyle; // ivar: _byGlyphStyle
@property (nonatomic) NSUInteger deliveryStyle; // ivar: _deliveryStyle
@property (nonatomic) BOOL includesActionBuilds; // ivar: _includesActionBuilds
@property (nonatomic) BOOL isMagicMove; // ivar: _isMagicMove
@property (weak, nonatomic) NSObject<TSDAnimationSession> *session; // ivar: _session
@property (nonatomic) BOOL shouldAddFinal; // ivar: _shouldAddFinal
@property (nonatomic) BOOL shouldAddMagicMoveObjectOnly; // ivar: _shouldAddMagicMoveObjectOnly
@property (nonatomic) BOOL shouldAddMasks; // ivar: _shouldAddMasks
@property (nonatomic) BOOL shouldAddParameterizedStroke; // ivar: _shouldAddParameterizedStroke
@property (nonatomic) BOOL shouldDistortToFit; // ivar: _shouldDistortToFit
@property (nonatomic) BOOL shouldForceTextureGeneration; // ivar: _shouldForceTextureGeneration
@property (nonatomic) BOOL shouldIgnoreScaleInSourceImage; // ivar: _shouldIgnoreScaleInSourceImage
@property (nonatomic) BOOL shouldNotAddContainedReps; // ivar: _shouldNotAddContainedReps
@property (nonatomic) BOOL shouldNotAddShapeAttributes; // ivar: _shouldAddNoShapeAttributes
@property (nonatomic) BOOL shouldNotAddText; // ivar: _shouldNotAddText
@property (nonatomic) BOOL shouldReverseStrokeDrawing; // ivar: _shouldReverseStrokeDrawing
@property (nonatomic) BOOL shouldSeparateGroupedTextures; // ivar: _shouldSeparateGroupedTextures
@property (nonatomic) BOOL shouldSeparateReflection; // ivar: _shouldSeparateReflection
@property (nonatomic) BOOL shouldSeparateShadow; // ivar: _shouldSeparateShadow
@property (nonatomic) BOOL shouldSeparateStroke; // ivar: _shouldSeparateStroke
@property (nonatomic) BOOL shouldSeparateText; // ivar: _shouldSeparateText
@property (nonatomic) NSUInteger stage; // ivar: _stage


+(id)descriptionWithSession:(id)arg0 ;
+(id)descriptionWithTextureDescription:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)reset;


@end


#endif