// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRVENDORMETADATASTORE_H
#define HMMTRVENDORMETADATASTORE_H

@class HMFObject, NSString, NSURL, UARPController;
@protocol UARPControllerDelegateProtocol, HMFLogging, HMMTRFileManager;


#import "HMMTRVendorMetadata.h"

@interface HMMTRVendorMetadataStore : HMFObject <UARPControllerDelegateProtocol, HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMMTRFileManager> *fileManager; // ivar: _fileManager
@property (readonly, copy) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (readonly, copy) HMMTRVendorMetadata *metadata;
@property (readonly) Class superclass;
@property (readonly) UARPController *uarpController; // ivar: _uarpController


+(id)logCategory;
-(BOOL)sendMessageToAccessory:(id)arg0 uarpMsg:(id)arg1 error:(*id)arg2 ;
-(id)initWithFileURL:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 uarpController:(id)arg1 fileManager:(id)arg2 ;
-(id)staticMetadata;
-(id)staticMetadataFileURL;
-(void)_addProductInfoToMetadata:(id)arg0 accessories:(id)arg1 ;
-(void)_addVendorInfoToMetadata:(id)arg0 accessories:(id)arg1 ;
-(void)_saveMetadata:(id)arg0 ;
-(void)assetAvailablityUpdateForAccessoryID:(id)arg0 assetID:(id)arg1 ;
-(void)fetchCloudMetadata;
-(void)supportedAccessories:(id)arg0 forProductGroup:(id)arg1 ;


@end


#endif