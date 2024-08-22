// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOOREDITMESSAGECOMMAND_H
#define BLASTDOOREDITMESSAGECOMMAND_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorMessageContent.h"
#import "BlastDoorMetadata.h"

@interface BlastDoorEditMessageCommand : NSObject {
    ? editMessageCommand;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger editType;
@property (nonatomic, readonly) NSString *editedMessageGUID;
@property (nonatomic, readonly) BlastDoorMessageContent *editedMessagePartBody;
@property (nonatomic, readonly) NSInteger editedMessagePartIndex;
@property (nonatomic, readonly) BOOL has_editedMessagePartIndex;
@property (nonatomic, readonly) BOOL has_shouldRetractSubject;
@property (nonatomic, readonly) BlastDoorMessageContent *messageContent;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) BOOL shouldRetractSubject;


-(id)init;


@end


#endif