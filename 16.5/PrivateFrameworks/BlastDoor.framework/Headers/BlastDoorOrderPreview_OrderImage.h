// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORORDERPREVIEW_ORDERIMAGE_H
#define BLASTDOORORDERPREVIEW_ORDERIMAGE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorImage.h"

@interface BlastDoorOrderPreview_OrderImage : NSObject {
    ? orderPreview_OrderImage;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorImage *image;
@property (nonatomic, readonly) unsigned char type;


-(id)init;


@end


#endif