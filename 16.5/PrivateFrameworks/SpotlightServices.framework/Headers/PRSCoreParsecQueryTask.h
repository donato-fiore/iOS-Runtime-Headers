// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSCOREPARSECQUERYTASK_H
#define PRSCOREPARSECQUERYTASK_H

@class PARSession, PARTask;


#import "PRSQueryTask.h"
#import "SPSearchSuggestionResult.h"

@interface PRSCoreParsecQueryTask : PRSQueryTask {
    PARSession *_parSession;
    BOOL _parsecEnabled;
}


@property (retain, nonatomic) SPSearchSuggestionResult *suggestionResult; // ivar: _suggestionResult
@property (retain) PARTask *task; // ivar: _task


-(BOOL)needsBag;
-(id)initWithSession:(id)arg0 parsecSession:(id)arg1 handler:(id)arg2 queue:(id)arg3 queryContext:(id)arg4 queryIdent:(NSUInteger)arg5 ;
-(void)handleResults:(id)arg0 ;
-(void)resume;
-(void)setParsecState:(BOOL)arg0 ;


@end


#endif