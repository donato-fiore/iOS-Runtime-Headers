// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANAGEDNETWORKSETTINGS_H
#define MANAGEDNETWORKSETTINGS_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ManagedNetworkSettings : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedMNS;
-(id)init;
-(void)handleEvent:(id)arg0 ;
-(void)reloadMNS;
-(void)reloadNetworkdSettings;


@end


#endif