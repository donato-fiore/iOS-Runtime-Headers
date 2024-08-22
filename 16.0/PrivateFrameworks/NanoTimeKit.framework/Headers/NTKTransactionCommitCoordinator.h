// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKTRANSACTIONCOMMITCOORDINATOR_H
#define NTKTRANSACTIONCOMMITCOORDINATOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface NTKTransactionCommitCoordinator : NSObject {
    NSMutableArray *_commitHandlers;
}




+(BOOL)addTransactionCommitHandler:(id)arg0 ;
+(id)_sharedInstance;
+(void)flushCommitHandlers;
-(BOOL)_addTransactionCommitHandler:(id)arg0 ;
-(id)init;
-(void)_registerCATransactionCommitHandler;


@end


#endif