// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPAVLIGHTWEIGHTROUTINGCONTROLLER_H
#define MPAVLIGHTWEIGHTROUTINGCONTROLLER_H

@class AVOutputDeviceDiscoverySession, AVOutputContext, NSDate, NSString, NSArray;
@protocol MPAVLightweightRoutingControllerDelegate;

#import <Foundation/Foundation.h>


@interface MPAVLightweightRoutingController : NSObject {
    AVOutputDeviceDiscoverySession *_avDiscoverySession;
    AVOutputContext *_avOutputContext;
    BOOL _notificationScheduled;
    NSDate *_lastOutputContextNotificationDate;
}


@property (weak, nonatomic) NSObject<MPAVLightweightRoutingControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isDevicePresenceDetected) BOOL devicePresenceDetected;
@property (nonatomic) NSInteger discoveryMode; // ivar: _discoveryMode
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSArray *pickedRoutes;


-(id)description;
-(id)initWithName:(id)arg0 ;
-(void)_availableOutputDevicesDidChangeNotification:(id)arg0 ;
-(void)_onSyncSelf_schedulePickedRoutesChangedNotification;
-(void)_outputContextDevicesDidChangeNotification:(id)arg0 ;
-(void)_postPickedRoutesChangedNotification;
-(void)dealloc;


@end


#endif