// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIWORDSEARCHOPERATIONCONTEXTACCEPTCANDIDATE_H
#define TIWORDSEARCHOPERATIONCONTEXTACCEPTCANDIDATE_H



#import "TIWordSearchOperation.h"
#import "TIMecabraEnvironment.h"

@interface TIWordSearchOperationContextAcceptCandidate : TIWordSearchOperation {
    *void _mecabraCandidate;
}


@property (retain, nonatomic) TIMecabraEnvironment *mecabraEnvironment; // ivar: _mecabraEnvironment
@property (nonatomic, getter=isPartialCandidate) BOOL partialCandidate; // ivar: _partialCandidate
@property (nonatomic, getter=isPrediction) BOOL prediction; // ivar: _prediction


-(id)initWithWordSearch:(id)arg0 mecabraCandidate:(*void)arg1 isPartial:(BOOL)arg2 isPrediction:(BOOL)arg3 ;
-(void)cancel;
-(void)dealloc;
-(void)perform;


@end


#endif