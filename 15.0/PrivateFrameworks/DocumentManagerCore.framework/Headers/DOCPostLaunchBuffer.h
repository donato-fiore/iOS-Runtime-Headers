// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCPOSTLAUNCHBUFFER_H
#define DOCPOSTLAUNCHBUFFER_H



#import "DOCOperationBuffer.h"

@interface DOCPostLaunchBuffer : DOCOperationBuffer



+(id)shared;
-(id)initWithLabel:(id)arg0 targetQueue:(id)arg1 ;
-(void)performAfterLaunch:(id)arg0 ;
-(void)performAfterLaunchAlwaysAsync:(BOOL)arg0 block:(id)arg1 ;


@end


#endif