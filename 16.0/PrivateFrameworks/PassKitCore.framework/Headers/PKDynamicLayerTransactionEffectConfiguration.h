// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDYNAMICLAYERTRANSACTIONEFFECTCONFIGURATION_H
#define PKDYNAMICLAYERTRANSACTIONEFFECTCONFIGURATION_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKDynamicLayerTransactionEffectConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger style; // ivar: _style


+(BOOL)supportsSecureCoding;
-(id)configureTransactionEffectEmitterLayer:(id)arg0 withImage:(struct CGImage *)arg1 andEmitterShapeData:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)configureTransactionEffectEmitterLayer:(id)arg0 withBounds:(struct CGRect )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif