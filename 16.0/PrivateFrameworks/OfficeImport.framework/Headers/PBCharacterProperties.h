// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBCHARACTERPROPERTIES_H
#define PBCHARACTERPROPERTIES_H


#import <Foundation/Foundation.h>


@interface PBCharacterProperties : NSObject



+(void)readCharacterProperties:(id)arg0 characterProperty:(struct PptCharProperty *)arg1 state:(id)arg2 ;
+(void)readCharacterProperties:(id)arg0 characterPropertyRun:(struct PptCharRun *)arg1 state:(id)arg2 ;
+(void)readCharacterProperties:(id)arg0 specialInfo:(struct PptSpecialInfo *)arg1 state:(id)arg2 ;
+(void)readCharacterProperties:(id)arg0 specialInfoRun:(*void)arg1 state:(id)arg2 ;


@end


#endif