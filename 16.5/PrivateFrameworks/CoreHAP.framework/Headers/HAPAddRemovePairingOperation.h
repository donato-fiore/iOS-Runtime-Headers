// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPADDREMOVEPAIRINGOPERATION_H
#define HAPADDREMOVEPAIRINGOPERATION_H

@class HMFObject, NSString, NSData;
@protocol OS_dispatch_queue;



@interface HAPAddRemovePairingOperation : HMFObject

@property (nonatomic) BOOL admin; // ivar: _admin
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger operation; // ivar: _operation
@property (nonatomic) BOOL operationExecuting; // ivar: _operationExecuting
@property (retain, nonatomic) NSData *publicKey; // ivar: _publicKey
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWith:(NSInteger)arg0 identifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(id)arg5 ;


@end


#endif