// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCDEFAULTDEVICEMANAGER_H
#define _GCDEFAULTDEVICEMANAGER_H

@class NSNumber, NSMutableSet, NSMutableDictionary, NSString;
@protocol _GCPhysicalDeviceManager, _GCLogicalDeviceManager, _GCDeviceMatchingFilter, OS_dispatch_queue, _GCDefaultDeviceManagerDelegate, GCPhysicalDeviceRegistry><GCLogicalDeviceRegistry, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _GCDefaultDeviceManager : NSObject <_GCPhysicalDeviceManager, _GCLogicalDeviceManager>

 {
    NSNumber *_probeScore;
    id<_GCDeviceMatchingFilter> *_matchingFilter;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_claimedServices;
    NSMutableDictionary *_physicalDevices;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_GCDefaultDeviceManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak) NSObject<GCPhysicalDeviceRegistry><GCLogicalDeviceRegistry> *deviceRegistry; // ivar: _deviceRegistry
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(BOOL)acceptDriverConnection:(id)arg0 forHIDDevice:(id)arg1 ;
-(BOOL)acceptFilterConnection:(id)arg0 forHIDDevice:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 matchingFilter:(id)arg1 probeScore:(id)arg2 ;
-(id)makeDeviceWithConfiguration:(id)arg0 dependencies:(id)arg1 ;
-(id)matchHIDDevice:(id)arg0 ;
-(void)_onqueue_checkAndDisconnectDuplicateDevice:(id)arg0 ;
-(void)_onqueue_registerDefaultConfigurationForDevice:(id)arg0 ;
-(void)_onqueue_relinquishHIDDevice:(id)arg0 ;
-(void)claimHIDDevice:(id)arg0 ;
-(void)relinquishHIDDevice:(id)arg0 ;


@end


#endif