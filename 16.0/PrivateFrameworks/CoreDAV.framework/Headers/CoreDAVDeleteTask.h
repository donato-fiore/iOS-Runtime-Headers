// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVDELETETASK_H
#define COREDAVDELETETASK_H

@class NSString;
@protocol CoreDAVTaskDelegate;


#import "CoreDAVActionBackedTask.h"

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask

@property (weak, nonatomic) NSObject<CoreDAVTaskDelegate> *delegate;
@property (retain, nonatomic) NSString *previousETag; // ivar: _previousETag


-(id)additionalHeaderValues;
-(id)description;
-(id)httpMethod;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif