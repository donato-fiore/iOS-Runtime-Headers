// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCARTICLESTREAMINGRESULTS_H
#define FCARTICLESTREAMINGRESULTS_H



#import "FCStreamingResults.h"
#import "FCArticleSearchOperationFeedbackResult.h"

@interface FCArticleStreamingResults : FCStreamingResults

@property (retain, nonatomic) FCArticleSearchOperationFeedbackResult *feedbackResult; // ivar: _feedbackResult


-(void)fetchObjectsUpToCount:(NSUInteger)arg0 qualityOfService:(NSInteger)arg1 batchSize:(NSUInteger)arg2 completion:(id)arg3 ;


@end


#endif