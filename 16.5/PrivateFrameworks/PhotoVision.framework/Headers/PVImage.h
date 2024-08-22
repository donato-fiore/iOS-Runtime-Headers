// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVIMAGE_H
#define PVIMAGE_H

@class CIImage, NSString, NSData, NSURL;

#import <Foundation/Foundation.h>


@interface PVImage : NSObject

@property (readonly, nonatomic) *CGImage CGImage; // ivar: _CGImage
@property (readonly, nonatomic) CIImage *CIImage; // ivar: _CIImage
@property (readonly, copy, nonatomic) id *adjustmentVersion; // ivar: _adjustmentVersion
@property (readonly, nonatomic) NSUInteger assetHeight; // ivar: _assetHeight
@property (readonly, nonatomic) NSUInteger assetWidth; // ivar: _assetWidth
@property (readonly, nonatomic) NSUInteger bytesPerRow; // ivar: _bytesPerRow
@property (readonly, nonatomic) NSString *groupingIdentifier; // ivar: _groupingIdentifier
@property (readonly, nonatomic) NSUInteger height; // ivar: _height
@property (readonly, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, copy, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (readonly, nonatomic) unsigned int orientation; // ivar: _orientation
@property (readonly, nonatomic) NSUInteger orientedHeight; // ivar: _orientedHeight
@property (readonly, nonatomic) NSUInteger orientedWidth; // ivar: _orientedWidth
@property (readonly, nonatomic) NSUInteger width; // ivar: _width


+(id)imageWithCGImage:(struct CGImage *)arg0 orientation:(unsigned int)arg1 adjustmentVersion:(id)arg2 creationDate:(id)arg3 ;
-(id)initWithCGImage:(struct CGImage *)arg0 orientation:(unsigned int)arg1 adjustmentVersion:(id)arg2 creationDate:(id)arg3 ;
-(struct CGRect )imageRectForNormalizedRect:(struct CGRect )arg0 ;
-(void)dealloc;


@end


#endif