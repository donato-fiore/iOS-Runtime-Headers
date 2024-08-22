// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDYNAMICLAYEREMITTERCONFIGURATION_H
#define PKDYNAMICLAYEREMITTERCONFIGURATION_H

@class CAEmitterLayer;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKDynamicLayerEmitterConfiguration : NSObject <NSSecureCoding, NSCopying>

 {
    CAEmitterLayer *_emitterLayer;
}


@property (nonatomic) NSUInteger density; // ivar: _density
@property (nonatomic) NSUInteger physicsEffect; // ivar: _physicsEffect
@property (nonatomic) NSUInteger style; // ivar: _style


+(BOOL)supportsSecureCoding;
-(float)_emitterBirthrate;
-(float)_emitterScaleWithPixelSize:(struct CGSize )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)configureEmitterLayer:(id)arg0 withBounds:(struct CGRect )arg1 ;
-(void)configureEmitterLayer:(id)arg0 withImage:(struct CGImage *)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif