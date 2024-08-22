// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VPEMERGENCYCALLSTATEOBSERVER_H
#define VPEMERGENCYCALLSTATEOBSERVER_H

@class TUCallCenter;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VPEmergencyCallStateObserver : NSObject

@property (copy, nonatomic) id *handler; // ivar: _handler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (retain, nonatomic) TUCallCenter *underlyingCallCenter; // ivar: _underlyingCallCenter


-(id)initWithEmergencyCallStateHandler:(id)arg0 ;
-(void)dealloc;
-(void)handleCallStatusChanged:(id)arg0 ;
-(void)notifyInitialEmergencyCallStatus;


@end


#endif