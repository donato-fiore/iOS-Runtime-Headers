// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORORDERPREVIEW_H
#define BLASTDOORORDERPREVIEW_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorColor.h"
#import "BlastDoorOrderPreview_OrderImage.h"
#import "BlastDoorOrderPreview_OrderText.h"

@interface BlastDoorOrderPreview : NSObject {
    ? orderPreview;
}


@property (nonatomic, readonly) BlastDoorColor *backgroundColor;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorOrderPreview_OrderImage *headerImage;
@property (nonatomic, readonly) BlastDoorOrderPreview_OrderText *primaryText;
@property (nonatomic, readonly) BlastDoorOrderPreview_OrderText *secondaryText;
@property (nonatomic, readonly) BlastDoorOrderPreview_OrderText *tertiaryText;


-(id)init;


@end


#endif