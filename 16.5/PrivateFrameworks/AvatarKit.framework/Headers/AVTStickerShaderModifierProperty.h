// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTSTICKERSHADERMODIFIERPROPERTY_H
#define AVTSTICKERSHADERMODIFIERPROPERTY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVTStickerShaderModifierProperty : NSObject

@property (readonly, nonatomic) id *effectiveValue; // ivar: _effectiveValue
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) id *originalValue; // ivar: _originalValue
@property (readonly, nonatomic) NSString *type; // ivar: _type
@property (readonly, nonatomic) id *value; // ivar: _value


+(id)shaderModifierPropertyCache;
+(id)shaderModifierPropertyFromDictionary:(id)arg0 assetsPath:(id)arg1 ;
-(id)dictionaryWithTargetPath:(id)arg0 ;
-(id)initWithName:(id)arg0 type:(id)arg1 value:(id)arg2 originalValue:(id)arg3 ;


@end


#endif