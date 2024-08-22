// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORGROUPCONTEXT_H
#define BLASTDOORGROUPCONTEXT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface BlastDoorGroupContext : NSObject {
    ? groupContext;
}


@property (nonatomic, readonly) NSString *currentGroupName;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSUInteger groupParticipantVersion;
@property (nonatomic, readonly) NSUInteger groupProtocolVersion;
@property (nonatomic, readonly) BOOL has_groupParticipantVersion;
@property (nonatomic, readonly) BOOL has_groupProtocolVersion;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;


-(id)init;


@end


#endif