// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBITEMCOLLECTION_H
#define PBITEMCOLLECTION_H

@class NSUUID, NSDate, NSXPCListenerEndpoint, NSString, NSXPCListener, NSHashTable, NSArray, NSDictionary, NSData, NSXPCConnection, UISPasteSharingToken;
@protocol NSXPCListenerDelegate, PBItemDataTransferDelegate, NSSecureCoding, PBItemCollectionDataTransferDelegate;

#import <Foundation/Foundation.h>


@interface PBItemCollection : NSObject <NSXPCListenerDelegate, PBItemDataTransferDelegate, NSSecureCoding>



@property (readonly, nonatomic) NSUUID *UUID;
@property (nonatomic) NSInteger changeCount;
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSXPCListenerEndpoint *dataConsumersEndpoint;
@property (weak, nonatomic) NSObject<PBItemCollectionDataTransferDelegate> *dataTransferDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDeviceLockedPasteboard) BOOL deviceLockedPasteboard;
@property (retain, nonatomic) NSDate *expirationDate;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDataProvider;
@property (readonly, nonatomic) BOOL isGeneralPasteboard;
@property (nonatomic) BOOL isOrWasRemote;
@property (nonatomic) BOOL isRemote;
@property (retain, nonatomic) NSUUID *itemQueue_UUID; // ivar: _itemQueue_UUID
@property (retain, nonatomic) NSXPCListener *itemQueue_dataConsumersListener; // ivar: _itemQueue_dataConsumersListener
@property (weak, nonatomic) NSObject<PBItemCollectionDataTransferDelegate> *itemQueue_dataTransferDelegate; // ivar: _itemQueue_dataTransferDelegate
@property (nonatomic, getter=itemQueue_isDeviceLockedPasteboard) BOOL itemQueue_deviceLockedPasteboard; // ivar: _itemQueue_deviceLockedPasteboard
@property (retain, nonatomic) NSHashTable *itemQueue_invalidationDelegates; // ivar: _itemQueue_invalidationDelegates
@property (nonatomic) BOOL itemQueue_isDataProvider; // ivar: _itemQueue_isDataProvider
@property (nonatomic) BOOL itemQueue_isOrWasRemote; // ivar: _itemQueue_isOrWasRemote
@property (copy, nonatomic) NSArray *itemQueue_items; // ivar: _itemQueue_items
@property (copy, nonatomic) NSDictionary *itemQueue_metadata; // ivar: _itemQueue_metadata
@property (nonatomic, getter=itemQueue_originatorAllowedToCopyOnPaste) BOOL itemQueue_originatorAllowedToCopyOnPaste; // ivar: _itemQueue_originatorAllowedToCopyOnPaste
@property (copy, nonatomic) NSString *itemQueue_originatorBundleID; // ivar: _itemQueue_originatorBundleID
@property (nonatomic) NSInteger itemQueue_originatorDataOwner; // ivar: _itemQueue_originatorDataOwner
@property (copy, nonatomic) NSString *itemQueue_originatorLocalizedName; // ivar: _itemQueue_originatorLocalizedName
@property (copy, nonatomic) NSData *itemQueue_originatorPersistentID; // ivar: _itemQueue_originatorPersistentID
@property (copy, nonatomic) NSString *itemQueue_originatorTeamID; // ivar: _itemQueue_originatorTeamID
@property (retain, nonatomic) NSDictionary *itemQueue_privateMetadata; // ivar: _itemQueue_privateMetadata
@property (retain, nonatomic) NSXPCConnection *itemQueue_remoteDataProviderConnection; // ivar: _itemQueue_remoteDataProviderConnection
@property (retain, nonatomic) NSXPCListenerEndpoint *itemQueue_remoteDataProviderEndpoint; // ivar: _itemQueue_remoteDataProviderEndpoint
@property (copy, nonatomic) NSString *itemQueue_remoteDeviceName; // ivar: _itemQueue_remoteDeviceName
@property (nonatomic) NSInteger itemQueue_remotePasteboardState; // ivar: _itemQueue_remotePasteboardState
@property (copy, nonatomic) NSUUID *itemQueue_saveBootSession; // ivar: _itemQueue_saveBootSession
@property (nonatomic) NSUInteger itemQueue_saveTimestamp; // ivar: _itemQueue_saveTimestamp
@property (retain, nonatomic) UISPasteSharingToken *itemQueue_sharingToken; // ivar: _itemQueue_sharingToken
@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic, getter=isLocalOnly) BOOL localOnly;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) *BOOL originatorAllowedToCopyOnPaste;
@property (readonly, copy, nonatomic) NSString *originatorBundleID;
@property (nonatomic) NSInteger originatorDataOwner;
@property (readonly, copy, nonatomic) NSString *originatorLocalizedName;
@property (readonly, copy, nonatomic) NSData *originatorPersistentID;
@property (readonly, copy, nonatomic) NSString *originatorTeamID;
@property (readonly, copy, nonatomic) NSString *persistenceName;
@property (nonatomic, getter=isPersistent) BOOL persistent;
@property (retain, nonatomic) NSDictionary *privateMetadata;
@property (readonly, nonatomic, getter=isRemoteDataLoaded) BOOL remoteDataLoaded;
@property (copy, nonatomic) NSString *remoteDeviceName;
@property (readonly, nonatomic, getter=isRemoteMetadataLoaded) BOOL remoteMetadataLoaded;
@property (copy, nonatomic) NSUUID *saveBootSession;
@property (nonatomic) NSUInteger saveTimestamp;
@property (readonly, nonatomic) UISPasteSharingToken *sharingToken;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSystemPasteboard) BOOL systemPasteboard;


+(BOOL)supportsSecureCoding;
+(id)allowedClassesForSecureCoding;
-(BOOL)canInstantiateObjectOfClass:(Class)arg0 ;
-(BOOL)hasItemWithRepresentationConformingToType:(id)arg0 ;
-(BOOL)hasItemWithRepresentationOfType:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_remoteDataProviderConnection;
-(id)availableRepresentationTypes;
-(id)copyWithDoNothingLoaders;
-(id)copyWithItems:(id)arg0 ;
-(id)dataConsumersListener;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(struct ? )establishConnectionToDataProviderCompletionBlock:(id)arg0 ;
-(void)addInvalidationDelegate:(id)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)item:(id)arg0 representation:(id)arg1 beganDataTransferWithProgress:(id)arg2 ;
-(void)item:(id)arg0 representationFinishedDataTransfer:(id)arg1 ;
-(void)removeInvalidationDelegate:(id)arg0 ;
-(void)setDataProviderEndpoint:(id)arg0 ;
-(void)setUsesServerConnectionToLoadDataWithAuthenticationBlock:(id)arg0 ;
// -(void)setUsesServerConnectionToLoadDataWithAuthenticationBlock:(id)arg0 dataOwnerBlock:(unk)arg1  ;
-(void)shutdown;
-(void)waitForItemRequestsDeliveryCompletion:(id)arg0 ;


@end


#endif