// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORNOTIFYRECIPIENTCOMMAND_H
#define BLASTDOORNOTIFYRECIPIENTCOMMAND_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorMetadata.h"

@interface BlastDoorNotifyRecipientCommand : NSObject {
    ? notifyRecipientCommand;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;


-(id)init;


@end


#endif