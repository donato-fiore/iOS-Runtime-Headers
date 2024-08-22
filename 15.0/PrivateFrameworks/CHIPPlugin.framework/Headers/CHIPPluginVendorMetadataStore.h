// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPPLUGINVENDORMETADATASTORE_H
#define CHIPPLUGINVENDORMETADATASTORE_H

@class HMFObject, NSString, NSMutableArray, UARPController;
@protocol HMFLogging, UARPControllerDelegateProtocol, CHIPPluginFileManager;


#import "CHIPPluginVendorMetadata.h"

@interface CHIPPluginVendorMetadataStore : HMFObject <HMFLogging, UARPControllerDelegateProtocol>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<CHIPPluginFileManager> *fileManager; // ivar: _fileManager
@property (readonly) NSUInteger hash;
@property (readonly, copy) CHIPPluginVendorMetadata *metadata;
@property (readonly) NSMutableArray *metadataRefreshCompletionBlocks; // ivar: _metadataRefreshCompletionBlocks
@property (readonly) Class superclass;
@property (readonly) UARPController *uarpController; // ivar: _uarpController


+(id)defaultStore;
+(id)logCategory;
-(BOOL)sendMessageToAccessory:(id)arg0 uarpMsg:(id)arg1 error:(*id)arg2 ;
-(id)_dequeueMetadataRefreshCompletionBlock:(SEL)arg0 ;
-(id)init;
-(id)initWithUARPController:(id)arg0 fileManager:(id)arg1 ;
-(id)logIdentifier;
-(void)_enqueueMetadataRefreshCompletionBlock:(id)arg0 ;
-(void)_saveMetadata:(id)arg0 ;
-(void)assetAvailablityUpdateForAccessoryID:(id)arg0 assetID:(id)arg1 ;
-(void)fetchLatestMetadataWithCompletion:(id)arg0 ;


@end


#endif