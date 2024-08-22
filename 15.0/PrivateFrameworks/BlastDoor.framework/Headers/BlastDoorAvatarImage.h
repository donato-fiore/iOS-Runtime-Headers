// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLASTDOORAVATARIMAGE_H
#define BLASTDOORAVATARIMAGE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorImage.h"

@interface BlastDoorAvatarImage : NSObject {
    ? avatarImage;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorImage *image;
@property (nonatomic, readonly) NSString *imageName;


-(id)init;


@end


#endif