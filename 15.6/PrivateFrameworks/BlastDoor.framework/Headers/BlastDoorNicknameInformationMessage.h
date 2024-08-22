// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORNICKNAMEINFORMATIONMESSAGE_H
#define BLASTDOORNICKNAMEINFORMATIONMESSAGE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorMetadata.h"
#import "BlastDoorNicknameInformation.h"

@interface BlastDoorNicknameInformationMessage : NSObject {
    ? nicknameInformationMessage;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) BlastDoorNicknameInformation *nicknameInformation;


-(id)init;


@end


#endif