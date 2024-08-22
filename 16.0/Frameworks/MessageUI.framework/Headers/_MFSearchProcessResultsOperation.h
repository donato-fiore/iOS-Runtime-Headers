// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFSEARCHPROCESSRESULTSOPERATION_H
#define _MFSEARCHPROCESSRESULTSOPERATION_H

@class NSOperation;
@protocol _MFSearchResultsConsumer;



@interface _MFSearchProcessResultsOperation : NSOperation {
    id<_MFSearchResultsConsumer> *_consumer;
    NSUInteger _type;
    id *_completionBlock;
}




// +(id)operationWithResultsOfType:(NSUInteger)arg0 completion:(id)arg1 consumer:(unk)arg2  ;
-(void)main;


@end


#endif