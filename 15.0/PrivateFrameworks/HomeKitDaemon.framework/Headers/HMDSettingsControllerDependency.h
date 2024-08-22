// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSETTINGSCONTROLLERDEPENDENCY_H
#define HMDSETTINGSCONTROLLERDEPENDENCY_H

@class NSString, HMDSettingsMessageHandler<HMDSettingsMessageHandlerProtocol>, HMFMessageDispatcher, NSUUID;
@protocol HMDSettingsControllerDependency, HMDSettingsBackingStoreController, HMDSettingsMessageHandlerProtocol, HMDSettingsMetadataParserProtocol, OS_dispatch_queue, HMDSettingTransactionReceiverProtocol;

#import <Foundation/Foundation.h>


@interface HMDSettingsControllerDependency : NSObject <HMDSettingsControllerDependency>



@property (retain) NSObject<HMDSettingsBackingStoreController> *backingStoreController; // ivar: _backingStoreController
@property (readonly) NSString *codingKey; // ivar: _codingKey
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) HMDSettingsMessageHandler<HMDSettingsMessageHandlerProtocol> *internalMessageHandler; // ivar: _internalMessageHandler
@property (readonly) NSString *logIdentifier; // ivar: _logIdentifier
@property (retain) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly) NSObject<HMDSettingsMessageHandlerProtocol> *messageHandler;
@property (readonly) NSString *metadataFileName; // ivar: _metadataFileName
@property (readonly) NSObject<HMDSettingsMetadataParserProtocol> *metadataParser; // ivar: _metadataParser
@property (readonly) NSUUID *parentIdentifier; // ivar: _parentIdentifier
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (weak) NSObject<HMDSettingTransactionReceiverProtocol> *transactionReceiver; // ivar: _transactionReceiver


-(id)createSettingGroupModelWithName:(id)arg0 parent:(id)arg1 ;
-(id)createSettingModelWithName:(id)arg0 parent:(id)arg1 type:(id)arg2 properties:(id)arg3 ;
-(id)createSettingRootGroupModelWithParentModelID:(id)arg0 ;
-(id)initWithParentUUID:(id)arg0 logName:(id)arg1 queue:(id)arg2 metadataFileName:(id)arg3 codingKey:(id)arg4 ;
-(id)loadMetadata;
-(id)settingModelForUpdateWithIdentifier:(id)arg0 parentIdentifier:(id)arg1 value:(id)arg2 ;
-(id)settingValueForValue:(id)arg0 type:(id)arg1 constraintModels:(id)arg2 error:(*id)arg3 ;
-(void)configureWithHome:(id)arg0 messageDispatcher:(id)arg1 backingStoreController:(id)arg2 isCurrentUser:(BOOL)arg3 ;


@end


#endif