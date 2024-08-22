// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGASSET_H
#define SGASSET_H


#import <Foundation/Foundation.h>


@interface SGAsset : NSObject



+(id)asset;
+(id)localeAsset;
+(id)localeAssetIdentifier;
+(id)notificationQueue;
+(id)regionAsset;
+(id)regionAssetIdentifier;
+(void)downloadMetadataWithCompletion:(id)arg0 ;


@end


#endif