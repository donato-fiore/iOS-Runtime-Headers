// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDCHARACTERRUN_H
#define WDCHARACTERRUN_H

@class NSMutableString;


#import "WDRunWithCharacterProperties.h"

@interface WDCharacterRun : WDRunWithCharacterProperties {
    NSMutableString *mString;
    BOOL mBinaryWriterContentFlag;
}




-(BOOL)binaryWriterContentFlag;
-(BOOL)isEmpty;
-(id)description;
-(id)initWithParagraph:(id)arg0 ;
-(id)initWithParagraph:(id)arg0 string:(id)arg1 ;
-(id)string;
-(int)runType;
-(void)appendString:(id)arg0 ;
-(void)clearString;
-(void)copyPropertiesFrom:(id)arg0 ;
-(void)removeLastCharacter:(unsigned short)arg0 ;
-(void)setBinaryWriterContentFlag:(BOOL)arg0 ;
-(void)setPropertiesForDocument;
-(void)setString:(id)arg0 ;


@end


#endif