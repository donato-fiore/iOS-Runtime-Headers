// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORPASSPREVIEW_PASSTEXT_H
#define BLASTDOORPASSPREVIEW_PASSTEXT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorColor.h"

@interface BlastDoorPassPreview_PassText : NSObject {
    ? passPreview_PassText;
}


@property (nonatomic, readonly) BlastDoorColor *color;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *text;


-(id)init;


@end


#endif