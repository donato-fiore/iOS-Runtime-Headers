// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCTAGFEEDPROMOTEDHEADLINESFETCHOPERATION_H
#define FCTAGFEEDPROMOTEDHEADLINESFETCHOPERATION_H

@class NSArray;
@protocol FCCoreConfiguration, FCTagProviding, FCFeedPersonalizing;


#import "FCOperation.h"
#import "FCCloudContext.h"

@interface FCTagFeedPromotedHeadlinesFetchOperation : FCOperation {
    id<FCCoreConfiguration> *_configuration;
    FCCloudContext *_cloudContext;
    id<FCTagProviding> *_tag;
    id<FCFeedPersonalizing> *_personalizer;
    CGFloat _expireAfterTimeWindow;
    NSArray *_resultHeadlines;
}


@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler


-(id)initWithConfiguration:(id)arg0 cloudContext:(id)arg1 tag:(id)arg2 personalizer:(id)arg3 expireAfterTimeWindow:(CGFloat)arg4 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif