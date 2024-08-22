// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUPOSTCONCERNOPERATION_H
#define SUPOSTCONCERNOPERATION_H

@class ISOperation, NSString, NSNumber;
@protocol ISStoreURLOperationDelegate;


#import "SUConcernItem.h"

@interface SUPostConcernOperation : ISOperation <ISStoreURLOperationDelegate>



@property (retain) NSString *commentText; // ivar: _commentText
@property (retain) SUConcernItem *concern; // ivar: _concern
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSUInteger itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly) Class superclass;


-(id)_httpBody;
-(id)initWithConcern:(id)arg0 ;
-(void)dealloc;
-(void)operation:(id)arg0 finishedWithOutput:(id)arg1 ;
-(void)run;


@end


#endif