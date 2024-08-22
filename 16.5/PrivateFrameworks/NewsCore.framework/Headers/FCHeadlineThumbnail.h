// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCHEADLINETHUMBNAIL_H
#define FCHEADLINETHUMBNAIL_H


#import <Foundation/Foundation.h>

#import "FCAssetHandle.h"

@interface FCHeadlineThumbnail : NSObject

@property (retain, nonatomic) FCAssetHandle *thumbnailAssetHandle; // ivar: _thumbnailAssetHandle
@property (nonatomic) CGSize thumbnailSize; // ivar: _thumbnailSize


+(id)headlineThumbnailWithAssetHandle:(id)arg0 thumbnailSize:(struct CGSize )arg1 ;


@end


#endif