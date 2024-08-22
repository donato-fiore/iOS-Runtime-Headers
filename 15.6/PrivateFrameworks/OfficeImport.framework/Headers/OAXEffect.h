// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OAXEFFECT_H
#define OAXEFFECT_H


#import <Foundation/Foundation.h>


@interface OAXEffect : NSObject



+(?)readEffectsFromXmlNode:(?)arg0 packagePartdrawingState;
+(?)readGlowfromXmlNode;
+(?)readOuterShadowfromXmlNode;
+(?)readPresetShadowfromXmlNode;
+(?)readReflectionfromXmlNode;
+(?)readShadowfromXmlNode;
+(BOOL)isEmpty:(id)arg0 ;
+(id)presetShadowTypeEnumMap;
+(id)updateIncomingEffects:(id)arg0 ;
+(id)updateOutgoingEffects:(id)arg0 ;
+(void)writeGlow:(id)arg0 to:(id)arg1 ;
+(void)writeOuterShadow:(id)arg0 includeRotateWithShape:(BOOL)arg1 to:(id)arg2 ;
+(void)writePresetShadow:(id)arg0 to:(id)arg1 ;
+(void)writeReflection:(id)arg0 to:(id)arg1 ;
+(void)writeShadowBase:(id)arg0 to:(id)arg1 ;


@end


#endif