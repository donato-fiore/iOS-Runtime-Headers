// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SANPSEEKTOPLAYBACKPOSITION_H
#define SANPSEEKTOPLAYBACKPOSITION_H

@class NSArray, NSNumber;


#import "SADomainCommand.h"

@interface SANPSeekToPlaybackPosition : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSNumber *positionInMilliseconds;


+(id)seekToPlaybackPosition;
+(id)seekToPlaybackPositionWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif