// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SANPSETVOLUMELEVEL_H
#define SANPSETVOLUMELEVEL_H

@class NSString, NSArray, NSNumber;


#import "SABaseClientBoundCommand.h"

@interface SANPSetVolumeLevel : SABaseClientBoundCommand

@property (nonatomic) BOOL acknowledgedExceedingVolumeLimit;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSNumber *volumeValue;


+(id)setVolumeLevel;
+(id)setVolumeLevelWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif