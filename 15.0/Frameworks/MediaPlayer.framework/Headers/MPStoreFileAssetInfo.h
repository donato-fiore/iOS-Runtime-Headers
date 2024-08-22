// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTOREFILEASSETINFO_H
#define MPSTOREFILEASSETINFO_H

@class ICStoreFileAssetInfo, NSURL, NSString, NSArray, NSData;

#import <Foundation/Foundation.h>


@interface MPStoreFileAssetInfo : NSObject {
    ICStoreFileAssetInfo *_internalInfo;
}


@property (readonly, copy, nonatomic) NSURL *assetURL;
@property (readonly, copy, nonatomic) NSString *downloadKey;
@property (readonly, copy, nonatomic) NSArray *fairPlayInfoList;
@property (readonly, copy, nonatomic) NSString *fileExtension;
@property (readonly, nonatomic) NSUInteger fileSize;
@property (readonly, nonatomic) NSInteger flavorType;
@property (readonly, copy, nonatomic) NSData *md5;
@property (readonly, copy, nonatomic) NSString *playbackAuthorizationToken;
@property (readonly, nonatomic) NSInteger protectionType;


-(id)initWithiTunesCloudStoreFileAssetInfo:(id)arg0 ;


@end


#endif