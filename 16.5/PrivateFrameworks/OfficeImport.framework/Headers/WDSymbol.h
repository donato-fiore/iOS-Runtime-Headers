// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDSYMBOL_H
#define WDSYMBOL_H



#import "WDRunWithCharacterProperties.h"
#import "WDFont.h"

@interface WDSymbol : WDRunWithCharacterProperties {
    WDFont *mFont;
    unsigned short mCharacter;
}




-(id)description;
-(id)font;
-(id)initWithParagraph:(id)arg0 ;
-(int)runType;
-(unsigned short)character;
-(void)setCharacter:(unsigned short)arg0 ;
-(void)setFont:(id)arg0 ;


@end


#endif