// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFSEARCHADDRESULTSOPERATION_H
#define _MFSEARCHADDRESULTSOPERATION_H

@class NSOperation, NSArray;
@protocol _MFSearchResultsConsumer;



@interface _MFSearchAddResultsOperation : NSOperation {
    id<_MFSearchResultsConsumer> *_consumer;
    NSUInteger _type;
    NSArray *_results;
}




+(id)operationWithResults:(id)arg0 ofType:(NSUInteger)arg1 consumer:(id)arg2 ;
-(void)main;


@end


#endif