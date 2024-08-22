// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPUPLOADERASSET_H
#define UARPUPLOADERASSET_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "UARPAsset.h"
#import "UARPAssetVersion.h"
#import "UARPUploaderEndpoint.h"
#import "UARPSuperBinaryAsset.h"

@interface UARPUploaderAsset : NSObject {
    NSObject<OS_os_log> *_log;
    uarpPlatformAssetCallbacks _uarpCallbacks;
}


@property (readonly) UARPAsset *asset; // ivar: _asset
@property NSUInteger assetLength; // ivar: _assetLength
@property (retain) UARPAssetVersion *assetVersion; // ivar: _assetVersion
@property NSUInteger formatVersion; // ivar: _formatVersion
@property (readonly) BOOL internalSolicit; // ivar: _internalSolicit
@property NSUInteger numPayloads; // ivar: _numPayloads
@property (readonly, weak) UARPUploaderEndpoint *remoteEndpoint; // ivar: _remoteEndpoint
@property NSUInteger selectedPayload; // ivar: _selectedPayload
@property (readonly) *uarpPlatformAsset uarpAsset; // ivar: _uarpAsset
@property (readonly) *uarpPlatformAssetCallbacks uarpCallbacks;
@property (retain) UARPSuperBinaryAsset *uarpSuperBinary; // ivar: _uarpSuperBinary


-(id)initWithUARPAsset:(id)arg0 remoteEndpoint:(id)arg1 callbacks:(struct uarpPlatformAssetCallbacks *)arg2 internalSolicit:(BOOL)arg3 ;
-(void)setUarpPlatformAsset:(struct uarpPlatformAsset *)arg0 ;


@end


#endif