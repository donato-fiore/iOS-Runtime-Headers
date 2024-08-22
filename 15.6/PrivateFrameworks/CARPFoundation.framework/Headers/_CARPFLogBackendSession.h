// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CARPFLOGBACKENDSESSION_H
#define _CARPFLOGBACKENDSESSION_H

@class NSMutableArray, NSString;
@protocol CARPFLogBackendSession, CARPFLogging, _CARPFLogBackendSessionDelegate;

#import <Foundation/Foundation.h>


@interface _CARPFLogBackendSession : NSObject <CARPFLogBackendSession, CARPFLogging>

 {
    os_unfair_lock_s _lock;
    NSMutableArray *_queuedEvents;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_CARPFLogBackendSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)sendMessage:(id)arg0 ;
-(id)initWithSession:(id)arg0 delegate:(id)arg1 ;
-(void)_flushQueuedEvents;
-(void)activateWithSession;
-(void)dealloc;


@end


#endif