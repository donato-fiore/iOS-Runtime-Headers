// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREDAVOPTIONSTASK_H
#define COREDAVOPTIONSTASK_H

@protocol CoreDAVOptionsTaskDelegate;


#import "CoreDAVTask.h"

@interface CoreDAVOptionsTask : CoreDAVTask

@property (weak, nonatomic) NSObject<CoreDAVOptionsTaskDelegate> *delegate;


-(id)httpMethod;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif