// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLIMAGECONTAINER_H
#define PLIMAGECONTAINER_H

@class CIImage, NSArray, NSData, NSString;

#import <Foundation/Foundation.h>


@interface PLImageContainer : NSObject {
    *void _ioSurface;
    CIImage *_CIImage;
    CGSize _pixelSize;
}


@property (readonly, nonatomic) *CGImage CGImage; // ivar: _CGImage
@property (readonly, nonatomic) NSArray *auxiliaryImageRecords; // ivar: _auxiliaryImageRecords
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) *void ioSurface;
@property (readonly, nonatomic) CGSize pixelSize;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier; // ivar: _uniformTypeIdentifier


-(BOOL)hasAuxiliaryImages;
-(id)description;
-(id)initWithCGImage:(struct CGImage *)arg0 ;
-(id)initWithCGImage:(struct CGImage *)arg0 ioSurface:(*void)arg1 CIImage:(id)arg2 backingData:(id)arg3 uniformTypeIdentifier:(id)arg4 size:(struct CGSize )arg5 auxiliaryImageRecords:(id)arg6 ;
-(id)initWithIOSurface:(struct __IOSurface *)arg0 ;
-(id)initWithPLImage:(id)arg0 ;
-(id)initWithPLImage:(id)arg0 backingData:(id)arg1 uniformTypeIdentifier:(id)arg2 auxiliaryImageRecords:(id)arg3 ;
-(void)dealloc;


@end


#endif