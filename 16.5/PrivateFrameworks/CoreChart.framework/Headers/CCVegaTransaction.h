// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCVEGATRANSACTION_H
#define CCVEGATRANSACTION_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CCVegaTransaction : NSObject {
    int _status;
    NSHashTable *_scheduledRenderers;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}




+(id)singleton;
-(id)init;
-(void)_commitTransactionForRenderers:(id)arg0 ;
-(void)begin;
-(void)commit;
-(void)scheduleDisplay:(id)arg0 ;


@end


#endif