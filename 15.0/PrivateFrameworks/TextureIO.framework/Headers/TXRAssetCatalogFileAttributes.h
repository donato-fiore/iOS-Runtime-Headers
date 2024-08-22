// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TXRASSETCATALOGFILEATTRIBUTES_H
#define TXRASSETCATALOGFILEATTRIBUTES_H


#import <Foundation/Foundation.h>


@interface TXRAssetCatalogFileAttributes : NSObject {
    *CGColorSpace _colorSpace;
}


@property (nonatomic) *CGColorSpace colorSpace;
@property (nonatomic) unsigned char exifOrientation; // ivar: _exifOrientation
@property (nonatomic) NSUInteger fileFormat; // ivar: _fileFormat


-(id)init;


@end


#endif