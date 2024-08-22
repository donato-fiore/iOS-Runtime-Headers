// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WXCHARACTERPROPERTIES_H
#define WXCHARACTERPROPERTIES_H


#import <Foundation/Foundation.h>


@interface WXCharacterProperties : NSObject



+(?)readBooleanCharacterMultipleProperty:(?)arg0 propertyName:(?)arg1 attributeName:(?)arg2 outValuestate;
+(?)readBooleanCharacterProperty:(?)arg0 propertyName:(?)arg1 attributeName:(?)arg2 outValuestate;
+(?)readFillColor:(?)arg0 forTargetstate;
+(?)readFrom:(?)arg0 tostate;
+(?)readReflection:(?)arg0 fromXmlNodestate;
+(?)readShadowForTarget:(?)arg0 fromXmlNodestate;
+(BOOL)isBooleanCharacterPropertyTrue:(int)arg0 ;
+(id)emphasisMarkEnumMap;
+(id)fontHintEnumMap;
+(id)highlightEnumMap;
+(id)ligaturesEnumMap;
+(id)twoLineBracketsEnumMap;
+(id)underlineEnumMap;
+(id)verticalAlignEnumMap;
+(void)applyDeletionInsertionProperties:(id)arg0 state:(id)arg1 ;


@end


#endif