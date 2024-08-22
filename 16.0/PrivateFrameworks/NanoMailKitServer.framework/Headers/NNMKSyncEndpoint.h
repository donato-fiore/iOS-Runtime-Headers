// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKSYNCENDPOINT_H
#define NNMKSYNCENDPOINT_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NNMKSyncEndpoint : NSObject

@property (retain, nonatomic) NSMutableDictionary *datesForIDSIdentifiersScheduledToBeResent; // ivar: _datesForIDSIdentifiersScheduledToBeResent
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *endpointQueue; // ivar: _endpointQueue
@property (retain, nonatomic) NSMutableDictionary *lastResendIntervalByIDSIdentifier; // ivar: _lastResendIntervalByIDSIdentifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resendingQueue; // ivar: _resendingQueue


-(NSUInteger)newResendIntervalForPreviousResendInterval:(NSUInteger)arg0 errorCode:(NSInteger)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(void)dealloc;
-(void)dequeueIDSIdentifierForResend:(id)arg0 ;
-(void)enqueueIDSIdentifierForResend:(id)arg0 atDate:(id)arg1 silent:(BOOL)arg2 ;
-(void)enqueueIDSIdentifiersForResend:(id)arg0 ;
-(void)resendAllIDSIdentifiers;
-(void)resendObjectsForIDSIdentifier:(id)arg0 ;
-(void)resendReadyIDSIdentifiers;


@end


#endif