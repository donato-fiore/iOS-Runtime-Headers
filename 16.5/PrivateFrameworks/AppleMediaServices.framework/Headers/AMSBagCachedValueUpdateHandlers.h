// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSBAGCACHEDVALUEUPDATEHANDLERS_H
#define AMSBAGCACHEDVALUEUPDATEHANDLERS_H


#import <Foundation/Foundation.h>


@interface AMSBagCachedValueUpdateHandlers : NSObject {
    ? handlerQueue;
    ? lock;
}




+(NSUInteger)uninitializedToken;
// -(NSUInteger)add:(id)arg0 calledForKeys:(unk)arg1 initialValues:(id)arg2  ;
-(id)init;
-(id)initWithHandlerQueue:(id)arg0 ;
-(void)callUpdateHandlersUsingNewBagDictionary:(id)arg0 changedKeys:(id)arg1 ;
-(void)removeHandlerWithToken:(NSUInteger)arg0 ;


@end


#endif