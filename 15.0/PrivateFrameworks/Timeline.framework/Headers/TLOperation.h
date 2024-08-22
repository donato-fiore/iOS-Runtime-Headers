// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLOPERATION_H
#define TLOPERATION_H

@class NSOperation, NSError;
@protocol TLTimelineDataSource;



@interface TLOperation : NSOperation

@property (copy) id *completionBlock;
@property (retain) NSObject<TLTimelineDataSource> *dataSource; // ivar: _dataSource
@property (readonly) NSError *error; // ivar: _error
@property (copy) id *operationCompletionBlock; // ivar: _operationCompletionBlock


+(NSUInteger)relativePriority;
-(id)init;


@end


#endif