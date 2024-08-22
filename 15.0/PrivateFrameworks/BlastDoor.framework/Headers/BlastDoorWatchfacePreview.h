// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLASTDOORWATCHFACEPREVIEW_H
#define BLASTDOORWATCHFACEPREVIEW_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorImage.h"

@interface BlastDoorWatchfacePreview : NSObject {
    ? watchfacePreview;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorImage *image;


-(id)init;


@end


#endif