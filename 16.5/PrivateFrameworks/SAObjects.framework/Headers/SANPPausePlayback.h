// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SANPPAUSEPLAYBACK_H
#define SANPPAUSEPLAYBACK_H

@class NSArray;


#import "SADomainCommand.h"

@interface SANPPausePlayback : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;


+(id)pausePlayback;
+(id)pausePlaybackWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif