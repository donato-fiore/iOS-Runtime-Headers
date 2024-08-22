// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIWORDSEARCHOPERATIONRESETLEARNINGDICTIONARIES_H
#define TIWORDSEARCHOPERATIONRESETLEARNINGDICTIONARIES_H



#import "TIWordSearchOperation.h"
#import "TIMecabraWrapper.h"

@interface TIWordSearchOperationResetLearningDictionaries : TIWordSearchOperation

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper; // ivar: _mecabraWrapper


-(id)initWithMecabraWrapper:(id)arg0 ;
-(void)perform;


@end


#endif