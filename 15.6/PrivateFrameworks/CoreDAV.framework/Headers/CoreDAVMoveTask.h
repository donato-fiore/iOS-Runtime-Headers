// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREDAVMOVETASK_H
#define COREDAVMOVETASK_H

@class NSString;
@protocol CoreDAVMoveTaskDelegate;


#import "CoreDAVCopyOrMoveTask.h"

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask

@property (weak, nonatomic) NSObject<CoreDAVMoveTaskDelegate> *delegate;
@property (retain, nonatomic) NSString *previousETag; // ivar: _previousETag


-(id)additionalHeaderValues;
-(id)description;
-(id)httpMethod;
-(void)_callBackToDelegateWithResponses:(id)arg0 error:(id)arg1 ;
-(void)dealloc;


@end


#endif