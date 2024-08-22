// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SANPGETVOLUMELEVEL_H
#define SANPGETVOLUMELEVEL_H

@class NSArray;


#import "SABaseClientBoundCommand.h"

@interface SANPGetVolumeLevel : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;


+(id)getVolumeLevel;
+(id)getVolumeLevelWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif