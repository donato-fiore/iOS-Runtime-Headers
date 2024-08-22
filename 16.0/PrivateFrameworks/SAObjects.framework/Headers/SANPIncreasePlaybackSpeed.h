// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SANPINCREASEPLAYBACKSPEED_H
#define SANPINCREASEPLAYBACKSPEED_H

@class NSArray;


#import "SADomainCommand.h"

@interface SANPIncreasePlaybackSpeed : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;


+(id)increasePlaybackSpeed;
+(id)increasePlaybackSpeedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif