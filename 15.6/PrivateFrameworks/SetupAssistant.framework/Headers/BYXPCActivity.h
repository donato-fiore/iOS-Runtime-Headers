// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BYXPCACTIVITY_H
#define BYXPCACTIVITY_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface BYXPCActivity : NSObject

@property (copy, nonatomic) NSObject<OS_xpc_object> *criteria;
@property (retain, nonatomic) NSObject<OS_xpc_object> *underlyingActivity; // ivar: _underlyingActivity
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivity; // ivar: _xpcActivity


+(id)activityWithXPCActivity:(id)arg0 ;
-(BOOL)setCompletionStatus:(NSInteger)arg0 ;
-(BOOL)setState:(NSInteger)arg0 ;
-(BOOL)shouldDefer;
-(NSInteger)state;


@end


#endif