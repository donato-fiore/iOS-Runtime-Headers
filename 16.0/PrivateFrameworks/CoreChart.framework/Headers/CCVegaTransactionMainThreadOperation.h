// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCVEGATRANSACTIONMAINTHREADOPERATION_H
#define CCVEGATRANSACTIONMAINTHREADOPERATION_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface CCVegaTransactionMainThreadOperation : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
    id *_block;
}




-(id)init;
-(void)cancel;
-(void)provideBlock:(id)arg0 ;
-(void)runBlock;
-(void)waitForBlockReady;


@end


#endif