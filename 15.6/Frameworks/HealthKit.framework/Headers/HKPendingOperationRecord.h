// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKPENDINGOPERATIONRECORD_H
#define HKPENDINGOPERATIONRECORD_H


#import <Foundation/Foundation.h>


@interface HKPendingOperationRecord : NSObject

@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) NSInteger errorCount; // ivar: _errorCount
@property (readonly, copy, nonatomic) id *operationHandler; // ivar: _operationHandler


// +(id)pendingOperation:(id)arg0 completion:(unk)arg1  ;


@end


#endif