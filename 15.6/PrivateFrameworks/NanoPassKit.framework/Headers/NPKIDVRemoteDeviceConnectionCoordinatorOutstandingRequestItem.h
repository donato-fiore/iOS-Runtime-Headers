// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKIDVREMOTEDEVICECONNECTIONCOORDINATOROUTSTANDINGREQUESTITEM_H
#define NPKIDVREMOTEDEVICECONNECTIONCOORDINATOROUTSTANDINGREQUESTITEM_H

@class NSString;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPKIDVRemoteDeviceConnectionCoordinatorOutstandingRequestItem : NSObject {
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_queue> *_timeoutQueue;
}


@property (copy, nonatomic) id *completion; // ivar: _completion
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) NSString *messageIdentifier; // ivar: _messageIdentifier
@property (copy, nonatomic) id *timeoutHandler; // ivar: _timeoutHandler


-(id)initWithtimeoutQueue:(id)arg0 ;
-(void)dealloc;
-(void)invalidateCleanupTimer;
-(void)setOrResetCleanupTimer;


@end


#endif