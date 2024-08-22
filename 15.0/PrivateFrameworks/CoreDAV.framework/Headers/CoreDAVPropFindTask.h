// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVPROPFINDTASK_H
#define COREDAVPROPFINDTASK_H

@protocol CoreDAVTaskDelegate;


#import "CoreDAVPropertyFindBaseTask.h"

@interface CoreDAVPropFindTask : CoreDAVPropertyFindBaseTask

@property (weak, nonatomic) NSObject<CoreDAVTaskDelegate> *delegate;


-(id)httpMethod;
-(id)initWithPropertiesToFind:(id)arg0 atURL:(id)arg1 withDepth:(int)arg2 ;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif