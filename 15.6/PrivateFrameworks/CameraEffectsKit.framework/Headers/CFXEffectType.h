// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CFXEFFECTTYPE_H
#define CFXEFFECTTYPE_H

@class NSOrderedSet, NSString;

#import <Foundation/Foundation.h>


@interface CFXEffectType : NSObject

@property (retain, nonatomic) NSOrderedSet *effects; // ivar: _effects
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) int jtEffectType; // ivar: _jtEffectType
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle


+(id)effectTypeIdentifiers;
+(id)effectTypeWithIdentifier:(id)arg0 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif