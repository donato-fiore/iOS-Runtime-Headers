// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMTEXTRUNMAPPER_H
#define PMTEXTRUNMAPPER_H



#import "CMMapper.h"
#import "OADTextRun.h"

@interface PMTextRunMapper : CMMapper {
    OADTextRun *mTextRun;
}




-(BOOL)_isDefaultFill:(id)arg0 ;
-(id)copyCharacterStyleWithState:(id)arg0 ;
-(id)fontScheme;
-(id)initWithOadTextRun:(id)arg0 parent:(id)arg1 ;
-(void)addFontForLanguageType:(int)arg0 toCharacterStyle:(id)arg1 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;


@end


#endif