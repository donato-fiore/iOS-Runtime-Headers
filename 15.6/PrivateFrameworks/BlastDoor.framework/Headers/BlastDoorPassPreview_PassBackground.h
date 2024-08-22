// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORPASSPREVIEW_PASSBACKGROUND_H
#define BLASTDOORPASSPREVIEW_PASSBACKGROUND_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorColor.h"
#import "BlastDoorPassPreview_PassImage.h"

@interface BlastDoorPassPreview_PassBackground : NSObject {
    ? passPreview_PassBackground;
}


@property (nonatomic, readonly) BlastDoorColor *color;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorPassPreview_PassImage *image;


-(id)init;


@end


#endif