// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPPLUGINVENDORMETADATASTORE_H
#define CHIPPLUGINVENDORMETADATASTORE_H

@class HMFObject, NSString, NSURL, UARPController;
@protocol HMFLogging, UARPControllerDelegateProtocol, CHIPPluginFileManager;


#import "CHIPPluginVendorMetadata.h"

@interface CHIPPluginVendorMetadataStore : HMFObject <HMFLogging, UARPControllerDelegateProtocol>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<CHIPPluginFileManager> *fileManager; // ivar: _fileManager
@property (readonly, copy) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (readonly, copy) CHIPPluginVendorMetadata *metadata;
@property (readonly) Class superclass;
@property (readonly) UARPController *uarpController; // ivar: _uarpController


+(id)logCategory;
-(BOOL)sendMessageToAccessory:(id)arg0 uarpMsg:(id)arg1 error:(*id)arg2 ;
-(id)initWithFileURL:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 uarpController:(id)arg1 fileManager:(id)arg2 ;
-(id)staticMetadata;
-(id)staticMetadataFileURL;
-(void)_saveMetadata:(id)arg0 ;
-(void)assetAvailablityUpdateForAccessoryID:(id)arg0 assetID:(id)arg1 ;
-(void)fetchCloudMetadata;
-(void)supportedAccessories:(id)arg0 forProductGroup:(id)arg1 ;


@end


#endif