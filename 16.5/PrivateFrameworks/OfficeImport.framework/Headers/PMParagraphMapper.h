// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMPARAGRAPHMAPPER_H
#define PMPARAGRAPHMAPPER_H



#import "CMMapper.h"
#import "OADParagraph.h"

@interface PMParagraphMapper : CMMapper {
    OADParagraph *mParagraph;
}




-(id)copyParagraphStyleWithState:(id)arg0 isFirstParagraph:(BOOL)arg1 ;
-(id)fontScheme;
-(id)initWithOadParagraph:(id)arg0 parent:(id)arg1 ;
-(int)firstTextRunFontSize;
-(void)addEndCharacterStyleToStyle:(id)arg0 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 isFirstParagraph:(BOOL)arg2 ;


@end


#endif