// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMPGENIUSSUMMON_H
#define SAMPGENIUSSUMMON_H

@class NSArray, NSNumber, NSString;


#import "SADomainCommand.h"
#import "SAMPMediaItem.h"

@interface SAMPGeniusSummon : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (retain, nonatomic) SAMPMediaItem *mediaItem;
@property (copy, nonatomic) NSNumber *startPlaying;
@property (copy, nonatomic) NSString *upNextQueueInsertLocation;


+(id)geniusSummon;
+(id)geniusSummonWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif