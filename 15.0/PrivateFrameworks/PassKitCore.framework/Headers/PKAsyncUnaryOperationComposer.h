// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKASYNCUNARYOPERATIONCOMPOSER_H
#define PKASYNCUNARYOPERATIONCOMPOSER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PKAsyncUnaryOperationComposer : NSObject {
    os_unfair_lock_s _lock;
    NSMutableArray *_operations;
}




-(id)evaluateWithInput:(id)arg0 completion:(id)arg1 ;
-(id)evaluatorWithInput:(id)arg0 ;
-(id)init;
-(void)addOperation:(id)arg0 ;


@end


#endif