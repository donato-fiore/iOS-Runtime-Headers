// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCAUDIOFEEDCONFIGOPERATION_H
#define FCAUDIOFEEDCONFIGOPERATION_H

@class NSString;
@protocol FCContentContext;


#import "FCOperation.h"

@interface FCAudioFeedConfigOperation : FCOperation {
    id<FCContentContext> *_context;
    NSString *_resultFeedConfig;
    NSString *_resultLegacyConfig;
}


@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler


-(BOOL)validateOperation;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif