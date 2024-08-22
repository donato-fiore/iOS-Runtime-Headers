// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIWORDSEARCHOPERATIONSETLANGUAGEMODELADAPTATIONCONTEXT_H
#define TIWORDSEARCHOPERATIONSETLANGUAGEMODELADAPTATIONCONTEXT_H



#import "TIWordSearchOperation.h"
#import "TILanguageModelAdaptationContext.h"
#import "TIMecabraWrapper.h"

@interface TIWordSearchOperationSetLanguageModelAdaptationContext : TIWordSearchOperation

@property (copy, nonatomic) TILanguageModelAdaptationContext *adaptationContext; // ivar: _adaptationContext
@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper; // ivar: _mecabraWrapper


-(id)initWithWordSearch:(id)arg0 adaptationContext:(id)arg1 ;
-(void)cancel;
-(void)perform;


@end


#endif