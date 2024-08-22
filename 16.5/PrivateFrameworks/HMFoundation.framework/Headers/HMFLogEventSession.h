// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFLOGEVENTSESSION_H
#define HMFLOGEVENTSESSION_H

@class NSDictionary;
@protocol HMFLogBackendSession;


#import "HMFNullLogEventSession.h"

@interface HMFLogEventSession : HMFNullLogEventSession

@property (readonly, nonatomic) NSObject<HMFLogBackendSession> *backend; // ivar: _backend
@property (readonly, nonatomic) NSDictionary *commonFields; // ivar: _commonFields


-(id)initWithUUID:(id)arg0 serviceName:(id)arg1 commonFields:(id)arg2 backend:(id)arg3 ;
-(void)submitEventWithName:(id)arg0 payload:(id)arg1 ;


@end


#endif