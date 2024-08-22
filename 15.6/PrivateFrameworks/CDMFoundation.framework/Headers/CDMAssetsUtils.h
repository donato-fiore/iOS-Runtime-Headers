// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMASSETSUTILS_H
#define CDMASSETSUTILS_H


#import <Foundation/Foundation.h>


@interface CDMAssetsUtils : NSObject



+(BOOL)isCurrentServiceSkippableForAssetsAvailabilityCheck:(id)arg0 ;
+(id)findExistFolderInAssetFolders:(id)arg0 underBasePath:(id)arg1 useFileManager:(id)arg2 ;
+(id)getAssetVersionFromAssetMetadata:(id)arg0 ;
+(id)loadAssetMetadataFromAsset:(id)arg0 ;


@end


#endif