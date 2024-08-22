// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVCOPYTASK_H
#define COREDAVCOPYTASK_H

@protocol CoreDAVCopyTaskDelegate;


#import "CoreDAVCopyOrMoveTask.h"

@interface CoreDAVCopyTask : CoreDAVCopyOrMoveTask

@property (weak, nonatomic) NSObject<CoreDAVCopyTaskDelegate> *delegate;


-(BOOL)validate:(*id)arg0 ;
-(id)httpMethod;
-(void)_callBackToDelegateWithResponses:(id)arg0 error:(id)arg1 ;
-(void)dealloc;


@end


#endif