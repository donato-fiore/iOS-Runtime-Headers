// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSPELLCHECKERERRORMODEL_H
#define CHSPELLCHECKERERRORMODEL_H

@class PRErrorModel;



@interface CHSpellCheckerErrorModel : PRErrorModel



-(CGFloat)replacementErrorScoreForIntendedCharacter:(unsigned short)arg0 actualCharacter:(unsigned short)arg1 ;
-(CGFloat)transpositionErrorScoreForIntendedFirstCharacter:(unsigned short)arg0 intendedSecondCharacter:(unsigned short)arg1 ;
-(NSUInteger)getCharIndex:(unsigned short)arg0 ;


@end


#endif