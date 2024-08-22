// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORCHATSESSIONCLOSE_H
#define BLASTDOORCHATSESSIONCLOSE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorMetadata.h"

@interface BlastDoorChatSessionClose : NSObject {
    ? chatSessionClose;
}


@property (nonatomic, readonly) NSString *conversationID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *handle;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSInteger version;


-(id)init;


@end


#endif