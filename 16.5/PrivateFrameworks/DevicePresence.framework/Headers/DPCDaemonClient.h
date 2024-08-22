// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DPCDAEMONCLIENT_H
#define DPCDAEMONCLIENT_H

@class NSString;
@protocol DPCXPCClientInterface, DPCWatchPresenceDelegate;

#import <Foundation/Foundation.h>


@interface DPCDaemonClient : NSObject <DPCXPCClientInterface>

 {
    NSUInteger _currentError;
}


@property float currentProbablity; // ivar: _currentProbablity
@property NSUInteger currentWatchPresenceStatus; // ivar: _currentWatchPresenceStatus
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DPCWatchPresenceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)informDelegateWithError:(NSUInteger)arg0 ;
-(void)informDelegateWithLatestEvent;
-(void)informDelegateWithWatchStatusEvent:(NSUInteger)arg0 ;
-(void)newErrorDetected:(NSUInteger)arg0 ;
-(void)newWatchPresenceEvent:(NSUInteger)arg0 probability:(float)arg1 ;
-(void)newWatchStatusEvent:(NSUInteger)arg0 ;


@end


#endif