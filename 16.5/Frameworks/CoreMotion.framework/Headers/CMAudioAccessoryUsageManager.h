// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMAUDIOACCESSORYUSAGEMANAGER_H
#define CMAUDIOACCESSORYUSAGEMANAGER_H

@protocol OS_dispatch_queue, CMAudioAccessoryUsageDelegate;

#import <Foundation/Foundation.h>


@interface CMAudioAccessoryUsageManager : NSObject {
    unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> _locationConnection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}


@property (readonly, nonatomic, getter=isAuthorized) NSInteger authorizationStatus; // ivar: _authorizationStatus
@property (weak, nonatomic) NSObject<CMAudioAccessoryUsageDelegate> *delegate; // ivar: _delegate


+(BOOL)isAvailable;
-(id)init;
-(void)_connect;
-(void)_disconnect;
-(void)_handleMessage:(struct shared_ptr<CLConnectionMessage> )arg0 ;
-(void)dealloc;
-(void)requestAudioAccessoryUsageUpdatesWithHandler:(id)arg0 ;


@end


#endif