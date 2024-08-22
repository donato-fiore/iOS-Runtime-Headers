// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLENGINEBLOCKER_H
#define CPLENGINEBLOCKER_H


#import <Foundation/Foundation.h>

#import "CPLEngineSchedulerBlocker.h"
#import "CPLEngineWriteTransactionBlocker.h"

@interface CPLEngineBlocker : NSObject {
    BOOL _blocking;
}


@property (readonly, nonatomic) CPLEngineSchedulerBlocker *schedulerBlocker; // ivar: _schedulerBlocker
@property (readonly, nonatomic) CPLEngineWriteTransactionBlocker *writeTransactionBlocker; // ivar: _writeTransactionBlocker


-(id)initWithWriteTransactionBlocker:(id)arg0 schedulerBlocker:(id)arg1 ;
-(void)dealloc;
-(void)unblock;


@end


#endif