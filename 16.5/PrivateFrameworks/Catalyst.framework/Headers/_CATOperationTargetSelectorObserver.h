// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CATOPERATIONTARGETSELECTOROBSERVER_H
#define _CATOPERATIONTARGETSELECTOROBSERVER_H

@class NSString;
@protocol CATOperationObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CATOperationTargetSelectorObserver : NSObject <CATOperationObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger events; // ivar: _events
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SEL selector; // ivar: _selector
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *target; // ivar: _target
@property (readonly, nonatomic) id *userInfo; // ivar: _userInfo


-(id)init;
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 events:(NSUInteger)arg2 userInfo:(id)arg3 delegateQueue:(id)arg4 ;
-(void)invokeActionWithOperation:(id)arg0 ;
-(void)operationDidFinish:(id)arg0 ;
-(void)operationDidProgress:(id)arg0 ;
-(void)operationDidStart:(id)arg0 ;


@end


#endif