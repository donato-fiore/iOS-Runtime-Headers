// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORCOMBINEDPLUGINATTACHMENT_H
#define BLASTDOORCOMBINEDPLUGINATTACHMENT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorBalloonPluginPayloadWrapper.h"

@interface BlastDoorCombinedPluginAttachment : NSObject {
    ? combinedPluginAttachment;
}


@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorBalloonPluginPayloadWrapper *payload;


-(id)init;


@end


#endif