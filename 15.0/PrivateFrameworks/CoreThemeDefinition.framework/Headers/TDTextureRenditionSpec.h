// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TDTEXTURERENDITIONSPEC_H
#define TDTEXTURERENDITIONSPEC_H

@class NSSet;


#import "TDRenditionSpec.h"
#import "TDThemeCompressionType.h"
#import "TDTexturePixelFormat.h"

@interface TDTextureRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) TDThemeCompressionType *compressionType;
@property (nonatomic) BOOL cubeMap;
@property (retain, nonatomic) NSSet *mipLevels;
@property (retain, nonatomic) TDTexturePixelFormat *pixelFormat;


-(BOOL)canBePackedWithDocument:(id)arg0 ;
-(id)createCSIRepresentationWithCompression:(BOOL)arg0 colorSpaceID:(NSUInteger)arg1 document:(id)arg2 ;


@end


#endif