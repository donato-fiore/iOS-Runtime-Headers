// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSTOREHLSASSETINFO_H
#define MPSTOREHLSASSETINFO_H

@class ICStoreHLSAssetInfo, NSURL, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface MPStoreHLSAssetInfo : NSObject {
    ICStoreHLSAssetInfo *_internalInfo;
}


@property (readonly, copy, nonatomic) NSURL *alternateKeyCertificateURL;
@property (readonly, copy, nonatomic) NSURL *alternateKeyServerURL;
@property (readonly, copy, nonatomic) NSURL *alternatePlaylistURL;
@property (readonly, nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream;
@property (readonly, copy, nonatomic) NSURL *keyCertificateURL;
@property (readonly, copy, nonatomic) NSNumber *keyServerAdamID;
@property (readonly, copy, nonatomic) NSString *keyServerProtocolType;
@property (readonly, copy, nonatomic) NSURL *keyServerURL;
@property (readonly, copy, nonatomic) NSURL *playlistURL;


-(id)initWithiTunesCloudStoreHLSAssetInfo:(id)arg0 ;


@end


#endif