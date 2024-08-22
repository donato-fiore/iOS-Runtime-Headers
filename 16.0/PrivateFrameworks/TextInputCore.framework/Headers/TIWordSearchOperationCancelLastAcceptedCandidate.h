// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIWORDSEARCHOPERATIONCANCELLASTACCEPTEDCANDIDATE_H
#define TIWORDSEARCHOPERATIONCANCELLASTACCEPTEDCANDIDATE_H



#import "TIWordSearchOperation.h"
#import "TIMecabraWrapper.h"

@interface TIWordSearchOperationCancelLastAcceptedCandidate : TIWordSearchOperation

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper; // ivar: _mecabraWrapper


-(id)initWithWordSearch:(id)arg0 ;
-(void)cancel;
-(void)perform;


@end


#endif