// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCISSUETHUMBNAIL_H
#define FCISSUETHUMBNAIL_H


#import <Foundation/Foundation.h>

#import "FCAssetHandle.h"

@interface FCIssueThumbnail : NSObject

@property (retain, nonatomic) FCAssetHandle *thumbnailAssetHandle; // ivar: _thumbnailAssetHandle
@property (nonatomic) CGSize thumbnailSize; // ivar: _thumbnailSize


+(id)issueThumbnailWithAssetHandle:(id)arg0 thumbnailSize:(struct CGSize )arg1 ;


@end


#endif