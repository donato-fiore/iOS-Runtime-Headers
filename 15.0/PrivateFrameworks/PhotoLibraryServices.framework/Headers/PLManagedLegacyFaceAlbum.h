// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLMANAGEDLEGACYFACEALBUM_H
#define PLMANAGEDLEGACYFACEALBUM_H



#import "PLManagedAlbum.h"

@interface PLManagedLegacyFaceAlbum : PLManagedAlbum

@property (nonatomic) short keyAssetFaceIdentifier;
@property (nonatomic) int keyAssetFaceThumbnailIndex;


+(id)entityName;


@end


#endif