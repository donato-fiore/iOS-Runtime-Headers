// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SANPSETPLAYBACKSPEED_H
#define SANPSETPLAYBACKSPEED_H

@class NSArray;


#import "SADomainCommand.h"

@interface SANPSetPlaybackSpeed : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (nonatomic) CGFloat scalingFactor;


+(id)setPlaybackSpeed;
+(id)setPlaybackSpeedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif