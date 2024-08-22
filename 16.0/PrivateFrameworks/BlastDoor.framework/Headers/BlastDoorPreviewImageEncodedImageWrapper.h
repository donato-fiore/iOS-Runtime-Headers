// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORPREVIEWIMAGEENCODEDIMAGEWRAPPER_H
#define BLASTDOORPREVIEWIMAGEENCODEDIMAGEWRAPPER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorPreviewImage_EncodedAstc.h"
#import "BlastDoorPreviewImage_EncodedBitmap.h"

@interface BlastDoorPreviewImageEncodedImageWrapper : NSObject {
    ? previewImage_EncodedImage;
}


@property (nonatomic, readonly) BlastDoorPreviewImage_EncodedAstc *astc;
@property (nonatomic, readonly) BlastDoorPreviewImage_EncodedBitmap *bitmap;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSUInteger type;


-(id)init;


@end


#endif