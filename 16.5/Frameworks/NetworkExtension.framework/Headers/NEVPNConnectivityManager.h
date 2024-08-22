// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEVPNCONNECTIVITYMANAGER_H
#define NEVPNCONNECTIVITYMANAGER_H

@class NSArray;
@protocol NEVPNConnectivitySessionDelegate, OS_dispatch_queue, NEVPNConnectivityManagerDelegate;

#import <Foundation/Foundation.h>

#import "NEConfigurationManager.h"

@interface NEVPNConnectivityManager : NSObject <NEVPNConnectivitySessionDelegate>

 {
    NEConfigurationManager *_configManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_sessions;
}


@property (nonatomic) NSUInteger connectivityState; // ivar: _connectivityState
@property (weak) NSObject<NEVPNConnectivityManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger visibilityStyle; // ivar: _visibilityStyle


-(id)initWithDelegate:(id)arg0 ;
-(id)toggleVPNConnectivity:(BOOL)arg0 ;
-(void)dealloc;
-(void)sessionStatusDidChange:(id)arg0 ;


@end


#endif