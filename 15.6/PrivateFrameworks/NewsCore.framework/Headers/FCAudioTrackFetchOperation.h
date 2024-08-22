// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCAUDIOTRACKFETCHOPERATION_H
#define FCAUDIOTRACKFETCHOPERATION_H

@protocol FCContentContext;


#import "FCOperation.h"
#import "FCArticleAudioTrack.h"

@interface FCAudioTrackFetchOperation : FCOperation

@property (copy, nonatomic) id *archiveHandler; // ivar: _archiveHandler
@property (readonly, nonatomic) FCArticleAudioTrack *audioTrack; // ivar: _audioTrack
@property (nonatomic) BOOL cachedOnly; // ivar: _cachedOnly
@property (readonly, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler
@property (copy, nonatomic) id *interestTokenHandler; // ivar: _interestTokenHandler


-(id)initWithContext:(id)arg0 audioTrack:(id)arg1 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif