// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORLARGEIMAGE_H
#define BLASTDOORLARGEIMAGE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorMachImage.h"
#import "BlastDoorMediaMetadata.h"

@interface BlastDoorLargeImage : NSObject {
    ? largeImage;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMachImage *image;
@property (nonatomic, readonly) BlastDoorMediaMetadata *metadata;


-(id)init;


@end


#endif