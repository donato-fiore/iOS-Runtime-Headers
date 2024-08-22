// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORRECOVERJUNKCOMMAND_H
#define BLASTDOORRECOVERJUNKCOMMAND_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorMetadata.h"

@interface BlastDoorRecoverJunkCommand : NSObject {
    ? recoverJunkCommand;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;


-(id)init;


@end


#endif