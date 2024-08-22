// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCESSORYDEVICEMONITOR_H
#define PKACCESSORYDEVICEMONITOR_H

@class ACCConnectionInfo, NSMutableDictionary, NSMutableSet, NSString;
@protocol ACCConnectionInfoDelegateProtocol, PKAccessoryDeviceMonitorDelegate;

#import <Foundation/Foundation.h>


@interface PKAccessoryDeviceMonitor : NSObject <ACCConnectionInfoDelegateProtocol>

 {
    ACCConnectionInfo *_accessoryConnectionInfo;
    NSMutableDictionary *_attachmentDictionary;
    NSMutableSet *_accessoryAttached;
    id<PKAccessoryDeviceMonitorDelegate> *_delegate;
    NSString *_accessoryConnectionUUID;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)accessoryAttachedForEndpointUUID:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)accessoryConnectionAttached:(id)arg0 type:(int)arg1 info:(id)arg2 properties:(id)arg3 ;
-(void)accessoryConnectionDetached:(id)arg0 ;
-(void)accessoryEndpointAttached:(id)arg0 transportType:(int)arg1 protocol:(int)arg2 properties:(id)arg3 forConnection:(id)arg4 ;
-(void)accessoryEndpointDetached:(id)arg0 forConnection:(id)arg1 ;


@end


#endif