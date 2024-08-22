// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC14WORKFLOWEDITOR25ACTIONPARAMETERSTATESTORE_H
#define _TTC14WORKFLOWEDITOR25ACTIONPARAMETERSTATESTORE_H

@protocol WFActionEventObserver;

#import <Foundation/Foundation.h>


@interface _TtC14WorkflowEditor25ActionParameterStateStore : NSObject <WFActionEventObserver>

 {
    ? action;
    ? parameters;
}




-(id)init;
-(void)action:(id)arg0 parameterStateDidChangeForKey:(id)arg1 ;
-(void)dealloc;


@end


#endif