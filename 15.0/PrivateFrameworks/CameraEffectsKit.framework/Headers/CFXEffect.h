// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CFXEFFECT_H
#define CFXEFFECT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "JFXEffect.h"

@interface CFXEffect : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isNone;
@property (retain, nonatomic) JFXEffect *jtEffect; // ivar: _jtEffect
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle


+(id)effectIdentifiersForEffectType:(id)arg0 ;
+(id)effectWithIdentifier:(id)arg0 forEffectType:(id)arg1 ;
+(id)effectWithJTEffect:(id)arg0 ;
+(void)initEffectRegistry;
+(void)preWarmShaderCache;
+(void)setupFactoryDelegate;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithJTEffect:(id)arg0 ;


@end


#endif