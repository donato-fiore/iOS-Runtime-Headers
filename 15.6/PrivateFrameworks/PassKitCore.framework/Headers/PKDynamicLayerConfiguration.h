// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDYNAMICLAYERCONFIGURATION_H
#define PKDYNAMICLAYERCONFIGURATION_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKDynamicLayerEmitterConfiguration.h"
#import "PKDynamicLayerCrossDissolveConfiguration.h"
#import "PKDynamicLayerTransactionEffectConfiguration.h"

@interface PKDynamicLayerConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) PKDynamicLayerEmitterConfiguration *backgroundParallaxEmitter; // ivar: _backgroundParallaxEmitter
@property (retain, nonatomic) PKDynamicLayerCrossDissolveConfiguration *crossDissolve; // ivar: _crossDissolve
@property (retain, nonatomic) PKDynamicLayerEmitterConfiguration *foregroundParallaxEmitter; // ivar: _foregroundParallaxEmitter
@property (retain, nonatomic) PKDynamicLayerEmitterConfiguration *neutralEmitter; // ivar: _neutralEmitter
@property (nonatomic) BOOL parallaxEnabled; // ivar: _parallaxEnabled
@property (retain, nonatomic) PKDynamicLayerEmitterConfiguration *staticOverlayEmitter; // ivar: _staticOverlayEmitter
@property (nonatomic, getter=isSupported) BOOL supported; // ivar: _supported
@property (retain, nonatomic) PKDynamicLayerTransactionEffectConfiguration *transactionEffect; // ivar: _transactionEffect
@property (nonatomic) NSUInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif