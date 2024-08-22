// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCTAGFEEDPROMOTEDHEADLINESFETCHOPERATION_H
#define FCTAGFEEDPROMOTEDHEADLINESFETCHOPERATION_H

@class NSArray;
@protocol FCCoreConfiguration, FCFeedPersonalizing;


#import "FCOperation.h"
#import "FCCloudContext.h"
#import "FCFeedDescriptor.h"

@interface FCTagFeedPromotedHeadlinesFetchOperation : FCOperation {
    id<FCCoreConfiguration> *_configuration;
    FCCloudContext *_cloudContext;
    FCFeedDescriptor *_feedDescriptor;
    id<FCFeedPersonalizing> *_personalizer;
    NSArray *_resultHeadlines;
}


@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler


-(id)initWithConfiguration:(id)arg0 cloudContext:(id)arg1 feedDescriptor:(id)arg2 personalizer:(id)arg3 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif