// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLENGINEWRITETRANSACTIONBLOCKER_H
#define CPLENGINEWRITETRANSACTIONBLOCKER_H


#import <Foundation/Foundation.h>


@interface CPLEngineWriteTransactionBlocker : NSObject {
    os_unfair_lock_s _lock;
    id *_unblock;
}




-(id)initWithUnblockBlock:(id)arg0 ;
-(void)dealloc;
-(void)unblock;


@end


#endif