// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIDECARTRANSFER_H
#define SIDECARTRANSFER_H

@protocol SidecarTransferDelegate;

#import <Foundation/Foundation.h>

#import "SidecarSession.h"

@interface SidecarTransfer : NSObject {
    os_unfair_lock_s _lock;
    SidecarSession *_session;
    uint8_t _suspendCount;
}


@property (weak, nonatomic) NSObject<SidecarTransferDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSInteger requestID; // ivar: _requestID
@property (readonly, nonatomic) SidecarSession *session;
@property (readonly, nonatomic) NSInteger transferID; // ivar: _transferID


-(id)_resumeMessage:(SEL)arg0 ;
-(id)dataForType:(id)arg0 ;
-(id)initWithSession:(id)arg0 requestID:(NSInteger)arg1 transferID:(NSInteger)arg2 ;


@end


#endif