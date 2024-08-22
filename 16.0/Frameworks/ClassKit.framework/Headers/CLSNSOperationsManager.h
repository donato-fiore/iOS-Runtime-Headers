// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSNSOPERATIONSMANAGER_H
#define CLSNSOPERATIONSMANAGER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CLSNSOperationsManager : NSObject {
    os_unfair_recursive_lock_s _lock;
    NSMutableArray *_operations;
}




-(NSUInteger)count;
-(id)init;
-(void)addOperation:(id)arg0 ;
-(void)lock;
-(void)performOperation:(id)arg0 onOperationQueue:(id)arg1 withTimeOut:(CGFloat)arg2 ;
-(void)removeOperation:(id)arg0 ;
-(void)unlock;


@end


#endif