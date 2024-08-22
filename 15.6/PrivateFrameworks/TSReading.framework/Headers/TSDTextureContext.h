// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDTEXTURECONTEXT_H
#define TSDTEXTURECONTEXT_H

@protocol NSCopying, TSDAnimationSession;

#import <Foundation/Foundation.h>


@interface TSDTextureContext : NSObject <NSCopying>

 {
    BOOL _shouldNotAddShapeAttributes;
}


@property (nonatomic) BOOL isMagicMove; // ivar: _isMagicMove
@property (nonatomic) NSObject<TSDAnimationSession> *session; // ivar: _session
@property (nonatomic) BOOL shouldAddFinal; // ivar: _shouldAddFinal
@property (nonatomic) BOOL shouldAddMagicMoveObjectOnly; // ivar: _shouldAddMagicMoveObjectOnly
@property (nonatomic) BOOL shouldAddReversedFinal; // ivar: _shouldAddReversedFinal
@property (nonatomic) BOOL shouldDistortToFit; // ivar: _shouldDistortToFit
@property (nonatomic) BOOL shouldForceTextureGeneration; // ivar: _shouldForceTextureGeneration
@property (nonatomic) BOOL shouldNotAddContainedReps; // ivar: _shouldNotAddContainedReps
@property (nonatomic) BOOL shouldNotAddShapeAttributes; // ivar: _shouldAddNoShapeAttributes
@property (nonatomic) BOOL shouldNotAddText; // ivar: _shouldNotAddText
@property (nonatomic) BOOL shouldNotCacheTexture; // ivar: _shouldNotCacheTexture
@property (nonatomic) BOOL shouldSeparateReflection; // ivar: _shouldSeparateReflection
@property (nonatomic) BOOL shouldSeparateShadow; // ivar: _shouldSeparateShadow
@property (nonatomic) BOOL shouldSeparateStroke; // ivar: _shouldSeparateStroke
@property (nonatomic) BOOL shouldSeparateText; // ivar: _shouldSeparateText


+(id)context;
+(id)contextWithSession:(id)arg0 ;
+(id)contextWithTextureContext:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)reset;


@end


#endif