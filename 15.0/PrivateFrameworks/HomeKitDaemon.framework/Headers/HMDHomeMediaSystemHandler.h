// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMEMEDIASYSTEMHANDLER_H
#define HMDHOMEMEDIASYSTEMHANDLER_H

@class HMFObject, HMFUnfairLock, NSMutableDictionary, NSString, NSArray, HMFMessageDispatcher, NSNotificationCenter, NSUUID;
@protocol HMDDevicePreferenceDataSource, HMDHomeMediaSystemMessageHandlerDelegate, NSSecureCoding, HMFLogging, HMDHomeMediaSystemHandlerDelegate, OS_dispatch_queue;


#import "HMDHome.h"
#import "HMDHomeMediaSystemControllerMessageHandler.h"
#import "HMDStereoPairDailyCountProvider.h"

@interface HMDHomeMediaSystemHandler : HMFObject <HMDDevicePreferenceDataSource, HMDHomeMediaSystemMessageHandlerDelegate, NSSecureCoding, HMFLogging>

 {
    HMFUnfairLock *_lock;
    NSMutableDictionary *_uuidToMediaSystems;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDHomeMediaSystemHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (readonly, copy) NSArray *mediaSystems;
@property (retain) HMDHomeMediaSystemControllerMessageHandler *messageHandler; // ivar: _messageHandler
@property (retain, nonatomic) HMFMessageDispatcher *messsageDispatcher; // ivar: _messsageDispatcher
@property (retain) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain) NSUUID *parentUUID; // ivar: _parentUUID
@property (readonly) HMDStereoPairDailyCountProvider *stereoPairDailyCountProvider; // ivar: _stereoPairDailyCountProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)supportsDeviceWithCapabilities:(id)arg0 ;
-(id)_currentMediaSystemIfPrimary;
-(id)attributeDescriptions;
-(id)backingStoreObjectsForVersion:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaSystems:(id)arg0 ;
-(id)logIdentifier;
-(id)mediaSystemForAccessory:(id)arg0 ;
-(id)mediaSystemWithUUID:(id)arg0 ;
-(id)privateDescription;
-(id)processedMediaSystemBuilderMessageFor:(id)arg0 ;
-(void)_handleAddMediaSystemModel:(id)arg0 message:(id)arg1 ;
-(void)_handleRemoveMediaSystemModel:(id)arg0 message:(id)arg1 ;
-(void)_handleUpdateMediaSystemModel:(id)arg0 message:(id)arg1 ;
-(void)_userAssistantAccessControlDidUpdate:(id)arg0 accessories:(id)arg1 ;
-(void)configure:(id)arg0 delegate:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3 notificationCenter:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)messageHandlerAddMediaSystem:(id)arg0 configuredName:(id)arg1 leftUUID:(id)arg2 leftAccessoryUUID:(id)arg3 rightUUID:(id)arg4 rightAccessoryUUID:(id)arg5 builderSession:(id)arg6 completion:(id)arg7 ;
-(void)messageHandlerRemoveMediaSystem:(id)arg0 builderSession:(id)arg1 completion:(id)arg2 ;
-(void)messageHandlerUpdateMediaSystem:(id)arg0 configuredName:(id)arg1 leftUUID:(id)arg2 leftAccessoryUUID:(id)arg3 rightUUID:(id)arg4 rightAccessoryUUID:(id)arg5 builderSession:(id)arg6 completion:(id)arg7 ;
-(void)removeMediaSystem:(id)arg0 ;
-(void)updateMediaSystem:(id)arg0 ;
-(void)updateMediaSystemWithMessage:(id)arg0 ;


@end


#endif