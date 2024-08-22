// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXANIMOJIEFFECT_H
#define JFXANIMOJIEFFECT_H

@class UIImage;


#import "JFXEffect.h"

@interface JFXAnimojiEffect : JFXEffect

@property (nonatomic) NSInteger captureInterfaceOrientation; // ivar: _captureInterfaceOrientation
@property (readonly, nonatomic) UIImage *thumbnail;


+(BOOL)isAvatarKitAvailable;
+(BOOL)supportsSecureCoding;
+(id)animojiIDs;
+(id)createAnimojiEffectForID:(id)arg0 ;
+(id)createMemojiEffectWithContentsOfFile:(id)arg0 identifier:(id)arg1 ;
-(BOOL)loadRenderEffect;
-(NSUInteger)avatarVersionNumber;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataRepresentation;
-(id)displayName;
-(id)initWithCoder:(id)arg0 ;
-(id)renderEffect;
-(int)type;
-(struct CGAffineTransform )_affineTransformFromEffectRect:(struct CGRect )arg0 toSize:(struct CGSize )arg1 basisOrigin:(int)arg2 ;
-(struct CGAffineTransform )transform:(struct CGRect )arg0 basisOrigin:(int)arg1 ;
-(struct PVCGPointQuad )_convertRenderEffectPoints:(struct PVCGPointQuad )arg0 toBasisRect:(struct CGRect )arg1 basisOrigin:(int)arg2 ;
-(void)_convertRenderEffectPoints:(struct CGPoint *)arg0 numPoints:(NSUInteger)arg1 fromBasisRect:(struct CGRect )arg2 basisOrigin:(int)arg3 ;
-(void)_convertRenderEffectPoints:(struct CGPoint *)arg0 numPoints:(NSUInteger)arg1 toBasisRect:(struct CGRect )arg2 basisOrigin:(int)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadRenderEffectInBackgroundWithCompletionOnMainQueue:(id)arg0 ;
-(void)loadRenderEffectOnQueue:(id)arg0 completion:(id)arg1 ;


@end


#endif