// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORSTICKER_H
#define BLASTDOORSTICKER_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "BlastDoorMessage.h"

@interface BlastDoorSticker : NSObject {
    ? sticker;
}


@property (nonatomic, readonly) NSString *associatedMessageGUID;
@property (nonatomic, readonly) _NSRange associatedMessageRange;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL has_associatedMessageRange;
@property (nonatomic, readonly) BlastDoorMessage *messageContent;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;


-(id)init;


@end


#endif