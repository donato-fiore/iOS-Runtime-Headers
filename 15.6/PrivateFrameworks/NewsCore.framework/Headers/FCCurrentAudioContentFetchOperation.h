// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCURRENTAUDIOCONTENTFETCHOPERATION_H
#define FCCURRENTAUDIOCONTENTFETCHOPERATION_H

@protocol FCContentContext;


#import "FCOperation.h"
#import "FCCurrentAudioContent.h"

@interface FCCurrentAudioContentFetchOperation : FCOperation {
    id<FCContentContext> *_context;
    FCCurrentAudioContent *_resultCurrentContent;
}


@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler


-(BOOL)validateOperation;
-(id)_promiseConfiguration;
-(id)_promiseContentWithConfiguration:(id)arg0 ;
-(id)_promisePlaceholderContentWithConfiguration:(id)arg0 ;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif