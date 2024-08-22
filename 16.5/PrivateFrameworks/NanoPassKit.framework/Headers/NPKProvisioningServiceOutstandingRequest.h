// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROVISIONINGSERVICEOUTSTANDINGREQUEST_H
#define NPKPROVISIONINGSERVICEOUTSTANDINGREQUEST_H

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface NPKProvisioningServiceOutstandingRequest : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) NSString *messageIdentifier; // ivar: _messageIdentifier
@property (copy, nonatomic) id *timeoutHandler; // ivar: _timeoutHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timeoutQueue; // ivar: _timeoutQueue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // ivar: _timeoutTimer


-(void)invalidateCleanupTimer;
-(void)setOrResetCleanupTimer;


@end


#endif