// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORPREVIEWIMAGE_H
#define BLASTDOORPREVIEWIMAGE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorPreviewImageEncodedImageWrapper.h"

@interface BlastDoorPreviewImage : NSObject {
    ? previewImage;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorPreviewImageEncodedImageWrapper *encodedImage;
@property (nonatomic, readonly) NSInteger frameCount;


-(id)init;


@end


#endif