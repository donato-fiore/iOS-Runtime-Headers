// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKREMOTEASSETMANIFEST_H
#define PKREMOTEASSETMANIFEST_H

@class NSURL, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface PKRemoteAssetManifest : NSObject {
    NSURL *_passURL;
}


@property (readonly, nonatomic) NSArray *encryptedDeviceSpecificRemoteAssetFilenames; // ivar: _encryptedDeviceSpecificRemoteAssetFilenames
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) NSDictionary *remoteAssets; // ivar: _remoteAssets


+(Class)_remoteAssestManifestItemClassWithValues:(id)arg0 ;
-(id)deviceSpecificAsset;
-(id)deviceSpecificAssetForScreenScale:(CGFloat)arg0 suffix:(id)arg1 ;
-(id)initWithFileURL:(id)arg0 passURL:(id)arg1 deviceSEIDs:(id)arg2 error:(*id)arg3 ;
-(id)initWithFileURL:(id)arg0 passURL:(id)arg1 error:(*id)arg2 ;


@end


#endif