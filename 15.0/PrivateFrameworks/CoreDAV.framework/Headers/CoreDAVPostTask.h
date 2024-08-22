// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVPOSTTASK_H
#define COREDAVPOSTTASK_H

@protocol CoreDAVTaskDelegate;


#import "CoreDAVPostOrPutTask.h"

@interface CoreDAVPostTask : CoreDAVPostOrPutTask

@property (weak, nonatomic) NSObject<CoreDAVTaskDelegate> *delegate;


-(id)httpMethod;
-(id)initWithDataPayload:(id)arg0 dataContentType:(id)arg1 atURL:(id)arg2 previousETag:(id)arg3 ;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif