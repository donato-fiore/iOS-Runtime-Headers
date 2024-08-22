// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IAMSTORAGECOORDINATOR_H
#define IAMSTORAGECOORDINATOR_H

@class NSSet, NSString;
@protocol IAMMessageEntryProviderDelegate, IAMMessageEntryProvider, IAMMessageMetadataStorage, IAMPropertyStorage, IAMStorageCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "IAMICStorageProvider.h"

@interface IAMStorageCoordinator : NSObject <IAMMessageEntryProviderDelegate>

 {
    id<IAMMessageEntryProvider> *_messageEntryProvider;
    id<IAMMessageMetadataStorage> *_messageMetadataStorage;
    id<IAMPropertyStorage> *_propertyStorage;
    NSSet *_messageBundleIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IAMStorageCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) IAMICStorageProvider *iTunesCloudStorageProvider; // ivar: _iTunesCloudStorageProvider
@property (readonly) Class superclass;


+(id)_propertyNameForGlobalPresentationPolicyGroupLastDisplayTime:(int)arg0 ;
-(id)initWithMessageEntryProvider:(id)arg0 messageMetadataStorage:(id)arg1 propertyStorage:(id)arg2 messageBundleIdentifiers:(id)arg3 ;
-(void)_fetchLastDisplayTimeForGlobalPresentationPolicyGroup:(int)arg0 completion:(id)arg1 ;
-(void)_fetchMessageEntries:(id)arg0 ;
-(void)_fetchMessagesMetadata:(id)arg0 ;
-(void)_updateLastDisplayTime:(id)arg0 forGlobalPresentationPolicyGroup:(int)arg1 ;
-(void)downloadResourcesForMessageEntry:(id)arg0 completion:(id)arg1 ;
-(void)fetchGlobalPresentationPolicyGroupDisplayTimes:(id)arg0 ;
-(void)fetchMessagesEntriesAndMetadata:(id)arg0 ;
-(void)messageEntriesDidChange:(id)arg0 ;
-(void)removeApplicationBadgeFromMessageEntry:(id)arg0 completion:(id)arg1 ;
-(void)removeMessageEntry:(id)arg0 completion:(id)arg1 ;
-(void)reportEventForMessageIdentifier:(id)arg0 withParams:(id)arg1 completion:(id)arg2 ;
-(void)updateLastDisplayTimeGlobalPresentationPolicyGroupNormal:(id)arg0 ;
-(void)updateLastDisplayTimeGlobalPresentationPolicyGroupRestricted:(id)arg0 ;
-(void)updateMetadata:(id)arg0 forMessageEntry:(id)arg1 completion:(id)arg2 ;


@end


#endif