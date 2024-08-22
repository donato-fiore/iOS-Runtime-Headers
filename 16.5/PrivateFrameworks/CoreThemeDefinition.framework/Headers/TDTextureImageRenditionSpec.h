// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDTEXTUREIMAGERENDITIONSPEC_H
#define TDTEXTUREIMAGERENDITIONSPEC_H



#import "TDRenditionSpec.h"
#import "TDTextureAsset.h"
#import "TDThemeCompressionType.h"
#import "TDTextureRenditionSpec.h"
#import "TDTextureMipLevel.h"

@interface TDTextureImageRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) TDTextureAsset *asset;
@property (retain, nonatomic) TDThemeCompressionType *compressionType;
@property (nonatomic) BOOL flipped;
@property (readonly, nonatomic) TDTextureRenditionSpec *texture;
@property (readonly, nonatomic) NSInteger textureFormat;
@property (retain, nonatomic) TDTextureMipLevel *textureLevelAssignment;


-(BOOL)canBePackedWithDocument:(id)arg0 ;
-(BOOL)isCubeMap;
-(BOOL)updatePackingPropertiesWithDocument:(id)arg0 ;
-(id)associatedFileModificationDateWithDocument:(id)arg0 ;
-(id)createCSIRepresentationWithCompression:(BOOL)arg0 colorSpaceID:(NSUInteger)arg1 document:(id)arg2 ;
-(id)textureFacesWithDocument:(id)arg0 ;
-(int)_pixelFormatOfCGImage:(struct CGImage *)arg0 ;
-(struct CGImage *)_createImageRefWithURL:(id)arg0 andDocument:(id)arg1 format:(*int)arg2 ;


@end


#endif