// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDBIOMEEVENTMANAGER_H
#define HMDBIOMEEVENTMANAGER_H

@class HMFObject, BMHomeKitClientActionSetStream, BMHomeKitClientAccessoryControlStream, BMHomeKitClientMediaAccessoryControlStream, NSNotificationCenter;
@protocol OS_dispatch_queue;



@interface HMDBiomeEventManager : HMFObject

@property (readonly) BMHomeKitClientActionSetStream *actionSetStream; // ivar: _actionSetStream
@property (readonly) BMHomeKitClientAccessoryControlStream *hapAccessoryStream; // ivar: _hapAccessoryStream
@property (readonly) BMHomeKitClientMediaAccessoryControlStream *mediaAccessoryStream; // ivar: _mediaAccessoryStream
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) id *prunableStreamFactory; // ivar: _prunableStreamFactory
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)init;
// -(id)initWithNotificationCenter:(id)arg0 actionSetStream:(id)arg1 mediaAccessoryStream:(id)arg2 accessoryStream:(id)arg3 prunableStreamFactory:(id)arg4 workQueue:(unk)arg5  ;
-(void)_handleAccessoryRemovedNotification:(id)arg0 ;
-(void)_handleActionSetEmptiedNotification:(id)arg0 ;
-(void)_handleHomeRemovedNotification:(id)arg0 ;
-(void)_handleServiceRemovedNotification:(id)arg0 ;
-(void)_submitAccessoryEvent:(id)arg0 ;
-(void)_submitActionSetEvent:(id)arg0 ;
-(void)_submitMediaAccessoryEvent:(id)arg0 ;
-(void)deleteAllEvents;
-(void)fetchMostRecentEventWithCharacteristicType:(id)arg0 serviceType:(id)arg1 homeSPIClientIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)submitAccessoryEvent:(id)arg0 ;
-(void)submitActionSetEvent:(id)arg0 ;
-(void)submitMediaAccessoryEvent:(id)arg0 ;


@end


#endif