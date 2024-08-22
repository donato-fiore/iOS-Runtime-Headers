// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAREMOTEEFFECT_H
#define CAREMOTEEFFECT_H

@class NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CARemoteEffect : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSDictionary *animations; // ivar: _animations
@property (copy) NSString *baseState; // ivar: _baseState
@property CGFloat blendFactor; // ivar: _blendFactor
@property (nonatomic) NSUInteger effectID; // ivar: _effectID
@property (nonatomic) NSUInteger layerRenderID; // ivar: _layerRenderID
@property (readonly, copy) NSString *name;
@property (copy) NSString *overrideState; // ivar: _overrideState


+(BOOL)supportsSecureCoding;
+(id)defaultValueForKey:(id)arg0 ;
-(BOOL)_setCARenderRemoteEffect:(*void)arg0 layer:(*void)arg1 ;
-(BOOL)shouldArchiveValueForKey:(id)arg0 ;
-(id)_copyWithZone:(struct _NSZone *)arg0 preservingEffectId:(BOOL)arg1 ;
-(id)animationFromState:(id)arg0 toState:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_setEffectId:(NSUInteger)arg0 ;
-(void)_setLayerRenderId:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAnimation:(id)arg0 fromState:(id)arg1 toState:(id)arg2 ;


@end


#endif