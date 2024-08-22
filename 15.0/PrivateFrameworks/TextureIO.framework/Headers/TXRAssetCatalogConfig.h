// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TXRASSETCATALOGCONFIG_H
#define TXRASSETCATALOGCONFIG_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "TXRAssetCatalogFileAttributes.h"
#import "TXRTexture.h"

@interface TXRAssetCatalogConfig : NSObject

@property (retain, nonatomic) TXRAssetCatalogFileAttributes *baseFileAttributes; // ivar: _baseFileAttributes
@property (nonatomic) NSUInteger displayColorSpace; // ivar: _displayColorSpace
@property (readonly, nonatomic) NSSet *fileAttributesList; // ivar: _fileAttributesList
@property (nonatomic) NSUInteger graphicsFeatureSet; // ivar: _graphicsFeatureSet
@property (nonatomic) NSUInteger idiom; // ivar: _idiom
@property (nonatomic) NSUInteger memory; // ivar: _memory
@property (nonatomic) NSUInteger mipmapOption; // ivar: _mipmapOption
@property (nonatomic) NSUInteger pixelFormat; // ivar: _pixelFormat
@property (nonatomic) NSUInteger scaleFactor; // ivar: _scaleFactor
@property (readonly, nonatomic) TXRTexture *texture; // ivar: _texture


-(id)initWithTexture:(id)arg0 ;
-(void)addFileAttributesForLevel:(NSUInteger)arg0 ;
-(void)addFileAttributesForLevel:(NSUInteger)arg0 face:(NSUInteger)arg1 ;
-(void)addFileAttributesForLevel:(NSUInteger)arg0 face:(NSUInteger)arg1 fileFormat:(NSUInteger)arg2 colorSpace:(struct CGColorSpace *)arg3 exifOrientation:(unsigned char)arg4 ;
-(void)addFileAttributesForLevel:(NSUInteger)arg0 fileFormat:(NSUInteger)arg1 colorSpace:(struct CGColorSpace *)arg2 exifOrientation:(unsigned char)arg3 ;


@end


#endif