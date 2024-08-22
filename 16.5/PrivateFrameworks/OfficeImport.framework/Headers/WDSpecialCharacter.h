// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDSPECIALCHARACTER_H
#define WDSPECIALCHARACTER_H



#import "WDRunWithCharacterProperties.h"

@interface WDSpecialCharacter : WDRunWithCharacterProperties {
    int mType;
}




-(id)description;
-(id)initWithParagraph:(id)arg0 ;
-(int)characterType;
-(int)runType;
-(void)setCharacterType:(int)arg0 ;


@end


#endif