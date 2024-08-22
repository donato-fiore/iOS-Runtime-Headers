// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKARGONASSETDOWNLOADER_H
#define NTKARGONASSETDOWNLOADER_H

@class NSURL;
@protocol NTKArgonLocalKeyDatabaseProviding;

#import <Foundation/Foundation.h>

#import "NTKArgonCloudKitClient.h"

@interface NTKArgonAssetDownloader : NSObject {
    BOOL _downloadingAssets;
}


@property (readonly, copy, nonatomic) NSURL *assetDestinationURL; // ivar: _assetDestinationURL
@property (retain, nonatomic) NTKArgonCloudKitClient *cloudKitClient; // ivar: _cloudKitClient
@property (readonly, nonatomic) NSObject<NTKArgonLocalKeyDatabaseProviding> *keyDatabase; // ivar: _keyDatabase


-(id)initWithKeyDatabase:(id)arg0 assetDestinationURL:(id)arg1 ;
-(void)downloadAssets;


@end


#endif