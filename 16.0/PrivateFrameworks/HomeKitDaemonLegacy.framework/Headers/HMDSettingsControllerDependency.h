// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSETTINGSCONTROLLERDEPENDENCY_H
#define HMDSETTINGSCONTROLLERDEPENDENCY_H

@class NSString, HMFMessageDispatcher, HMDSettingsMessageHandler<HMDSettingsMessageHandlerProtocol>, NSArray, NSUUID;
@protocol HMDSettingsControllerDependency, HMDSettingsBackingStoreController, OS_dispatch_queue, HMDSettingsMessageHandlerProtocol, HMDSettingsMetadataParserProtocol, HMDUserSettingsInitialValueProviding, HMDSettingTransactionReceiverProtocol;

#import <Foundation/Foundation.h>


@interface HMDSettingsControllerDependency : NSObject <HMDSettingsControllerDependency>

 {
    id<HMDSettingsBackingStoreController> *_backingStoreController;
    NSString *_metadataFileName;
    NSObject<OS_dispatch_queue> *_queue;
    HMFMessageDispatcher *_messageDispatcher;
    HMDSettingsMessageHandler<HMDSettingsMessageHandlerProtocol> *_internalMessageHandler;
}


@property (readonly) NSObject<HMDSettingsBackingStoreController> *backingStoreController;
@property (readonly) NSString *codingKey; // ivar: _codingKey
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *keyPathsToPrune; // ivar: _keyPathsToPrune
@property (readonly) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) NSObject<HMDSettingsMessageHandlerProtocol> *messageHandler;
@property (readonly) NSObject<HMDSettingsMetadataParserProtocol> *metadataParser; // ivar: _metadataParser
@property (readonly, weak) NSObject<HMDUserSettingsInitialValueProviding> *migrationProvider; // ivar: _migrationProvider
@property (readonly) NSUUID *parentIdentifier; // ivar: _parentIdentifier
@property (readonly) Class superclass;
@property (weak) NSObject<HMDSettingTransactionReceiverProtocol> *transactionReceiver; // ivar: _transactionReceiver


-(id)createSettingGroupModelWithName:(id)arg0 parent:(id)arg1 ;
-(id)createSettingModelWithName:(id)arg0 parent:(id)arg1 type:(id)arg2 properties:(id)arg3 ;
-(id)createSettingRootGroupModelWithParentModelID:(id)arg0 ;
-(id)initWithParentUUID:(id)arg0 logName:(id)arg1 queue:(id)arg2 metadataFileName:(id)arg3 codingKey:(id)arg4 messageHandler:(id)arg5 migrationProvider:(id)arg6 ;
-(id)initWithParentUUID:(id)arg0 logName:(id)arg1 queue:(id)arg2 metadataFileName:(id)arg3 codingKey:(id)arg4 messageHandler:(id)arg5 migrationProvider:(id)arg6 keyPathsToPrune:(id)arg7 ;
-(id)loadMetadata;
-(id)settingModelForUpdateWithIdentifier:(id)arg0 parentIdentifier:(id)arg1 value:(id)arg2 ;
-(id)settingValueForValue:(id)arg0 type:(id)arg1 constraintModels:(id)arg2 error:(*id)arg3 ;
-(void)configureWithHome:(id)arg0 messageDispatcher:(id)arg1 backingStoreController:(id)arg2 ;


@end


#endif