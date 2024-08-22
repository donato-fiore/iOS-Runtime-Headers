// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTOPERATIONDELEGATE_H
#define SUSCRIPTOPERATIONDELEGATE_H

@class NSMutableArray, NSLock, NSString;
@protocol ISOperationDelegate;

#import <Foundation/Foundation.h>


@interface SUScriptOperationDelegate : NSObject <ISOperationDelegate>

 {
    NSMutableArray *_operations;
    NSLock *_lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_removeOperation:(id)arg0 ;
-(void)cancelAllOperations;
-(void)dealloc;
-(void)enqueueOperation:(id)arg0 ;
-(void)operation:(id)arg0 failedWithError:(id)arg1 ;
-(void)operationFinished:(id)arg0 ;


@end


#endif