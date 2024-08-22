// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PFREQUESTEXECUTOR_H
#define _PFREQUESTEXECUTOR_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface _PFRequestExecutor : NSObject {
    NSObject<OS_dispatch_group> *_requestGroup;
}




-(BOOL)executeRequest:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)wait;
-(id)init;
-(void)dealloc;
-(void)requestFinished;


@end


#endif