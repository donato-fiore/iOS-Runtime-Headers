// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIWORDSEARCHOPERATIONACCEPTCANDIDATE_H
#define TIWORDSEARCHOPERATIONACCEPTCANDIDATE_H



#import "TIWordSearchOperation.h"
#import "TIMecabraWrapper.h"

@interface TIWordSearchOperationAcceptCandidate : TIWordSearchOperation {
    *void _mecabraCandidate;
}


@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper; // ivar: _mecabraWrapper
@property (nonatomic, getter=isPartialCandidate) BOOL partialCandidate; // ivar: _partialCandidate


-(id)initWithWordSearch:(id)arg0 mecabraCandidate:(*void)arg1 isPartial:(BOOL)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)perform;


@end


#endif