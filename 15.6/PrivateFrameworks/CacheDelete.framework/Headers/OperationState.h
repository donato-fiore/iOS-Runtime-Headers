// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OPERATIONSTATE_H
#define OPERATIONSTATE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface OperationState : NSObject

@property BOOL operationCancelled; // ivar: _operationCancelled
@property int operationRefcount; // ivar: _operationRefcount
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)begin;
-(BOOL)cancelled;
-(id)init;
-(void)cancel;
-(void)end;


@end


#endif