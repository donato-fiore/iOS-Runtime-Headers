// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORPASSPREVIEW_H
#define BLASTDOORPASSPREVIEW_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorPassPreview_PassBackground.h"
#import "BlastDoorColor.h"
#import "BlastDoorPassPreview_PassImage.h"
#import "BlastDoorPassPreview_PassText.h"

@interface BlastDoorPassPreview : NSObject {
    ? passPreview;
}


@property (nonatomic, readonly) BlastDoorPassPreview_PassBackground *background;
@property (nonatomic, readonly) BlastDoorColor *backgroundColor;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorPassPreview_PassImage *headerImage;
@property (nonatomic, readonly) BlastDoorPassPreview_PassText *primaryText;
@property (nonatomic, readonly) BlastDoorPassPreview_PassText *secondaryText;
@property (nonatomic, readonly) BlastDoorPassPreview_PassText *tertiaryText;


-(id)init;


@end


#endif