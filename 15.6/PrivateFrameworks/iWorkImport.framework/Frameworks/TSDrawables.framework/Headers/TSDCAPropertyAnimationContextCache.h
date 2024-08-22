// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDCAPROPERTYANIMATIONCONTEXTCACHE_H
#define TSDCAPROPERTYANIMATIONCONTEXTCACHE_H

@class NSString;


#import "TSDCAAnimationContextCache.h"

@interface TSDCAPropertyAnimationContextCache : TSDCAAnimationContextCache

@property (readonly, nonatomic, getter=isAdditive) BOOL additive; // ivar: _additive
@property (readonly, nonatomic) BOOL isAnimationKeyDoubleSided; // ivar: _isAnimationKeyDoubleSided
@property (readonly, nonatomic) BOOL isAnimationKeyHidden; // ivar: _isAnimationKeyHidden
@property (readonly, nonatomic) BOOL isAnimationKeyTypeOfRotation; // ivar: _isAnimationKeyTypeOfRotation
@property (nonatomic) BOOL isContentsAnimation; // ivar: _isContentsAnimation
@property (nonatomic) BOOL isObjectTypeCGColor; // ivar: _isObjectTypeCGColor
@property (readonly, nonatomic) NSString *keyPath; // ivar: _keyPath


-(id)adjustedResultWithValue:(id)arg0 ;
-(id)initWithAnimation:(id)arg0 ;
-(id)interpolatedValueFrom:(id)arg0 to:(id)arg1 percent:(CGFloat)arg2 ;
-(id)valueForKeyPath:(id)arg0 atTime:(CGFloat)arg1 animationCache:(id)arg2 ;


@end


#endif