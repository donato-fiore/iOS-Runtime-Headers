// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPRADIOCONTROLLER_H
#define MPRADIOCONTROLLER_H

@class NSXPCConnection, BKSProcessAssertion, NSString;
@protocol MPClientRadioController, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPRadioController : NSObject <MPClientRadioController>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_connection;
    BOOL _hasLaunchedService;
    BOOL _isRadioAvailable;
    BKSProcessAssertion *_remoteProcessAssertion;
    id *_remoteProcessAssertionCompletionHandler;
    NSInteger _remoteProcessAssertionCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isRadioAvailable) BOOL radioAvailable;
@property (readonly) Class superclass;


-(id)init;
-(void)_beginRemoteProcessAssertionWithCompletionHandler:(id)arg0 ;
-(void)_endRemoteProcessAssertion;
-(void)_getConnectionWithCompletionHandler:(id)arg0 ;
-(void)clientRadioControllerRadioAvailabilityDidChange:(BOOL)arg0 ;
-(void)clientRadioControllerRecentStationsDidChange;
-(void)dealloc;
-(void)getRecentStationGroupsWithCompletionHandler:(id)arg0 ;


@end


#endif