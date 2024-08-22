// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBPARAGRAPHPROPERTIES_H
#define PBPARAGRAPHPROPERTIES_H


#import <Foundation/Foundation.h>


@interface PBParagraphProperties : NSObject



+(int)pptAlignmentTypeWithOADTextAlignType:(unsigned char)arg0 ;
+(int)pptFontAlignWithOADTextFontAlign:(unsigned char)arg0 ;
+(short)pptTextSpacingWithOADParaSpacing:(id)arg0 defaultPptParaSpacing:(short)arg1 ;
+(void)readAlign:(id)arg0 pptAlignmentType:(int)arg1 ;
+(void)readParagraphProperties:(id)arg0 paragraphProperty:(*void)arg1 bulletStyle:(struct PptParaProperty9 *)arg2 isMaster:(BOOL)arg3 state:(id)arg4 ;
+(void)readParagraphProperties:(id)arg0 paragraphPropertyRun:(*void)arg1 bulletStyle:(struct PptParaProperty9 *)arg2 state:(id)arg3 ;


@end


#endif