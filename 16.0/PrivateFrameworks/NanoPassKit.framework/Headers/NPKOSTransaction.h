// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKOSTRANSACTION_H
#define NPKOSTRANSACTION_H

@class NSString;
@protocol OS_os_transaction, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPKOSTransaction : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_dispatch_queue> *_internalQueue;
}


@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(id)transactionWithName:(id)arg0 ;
-(id)_initWithName:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif