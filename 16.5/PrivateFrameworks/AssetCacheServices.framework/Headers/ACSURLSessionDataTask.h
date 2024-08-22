// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACSURLSESSIONDATATASK_H
#define ACSURLSESSIONDATATASK_H



#import "ACSURLSessionTask.h"

@interface ACSURLSessionDataTask : ACSURLSessionTask

@property (copy) id *_clientDataCompletionHandler; // ivar: __clientDataCompletionHandler


-(BOOL)_isUpload;
// -(id)initWithNSURLDataTaskCreator:(id)arg0 initialRequest:(unk)arg1 forSession:(id)arg2  ;


@end


#endif