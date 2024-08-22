// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCHECKARTICLESTATUSOPERATION_H
#define FCCHECKARTICLESTATUSOPERATION_H

@class NSString;
@protocol OS_dispatch_queue;


#import "FCOperation.h"
#import "FCCloudContext.h"

@interface FCCheckArticleStatusOperation : FCOperation

@property (copy, nonatomic) NSString *articleID; // ivar: _articleID
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (copy) id *checkStatusCompletion; // ivar: _checkStatusCompletion
@property (retain, nonatomic) FCCloudContext *context; // ivar: _context
@property (nonatomic) NSInteger resultStatus; // ivar: _resultStatus


-(BOOL)validateOperation;
-(id)initWithContext:(id)arg0 articleID:(id)arg1 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif