// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORVIDEOPREVIEW_H
#define BLASTDOORVIDEOPREVIEW_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorImage.h"

@interface BlastDoorVideoPreview : NSObject {
    ? videoPreview;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorImage *image;
@property (nonatomic, readonly) BOOL isAutoloop;


-(id)init;


@end


#endif