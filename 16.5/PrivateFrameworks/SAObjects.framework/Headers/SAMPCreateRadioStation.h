// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMPCREATERADIOSTATION_H
#define SAMPCREATERADIOSTATION_H

@class NSString, NSArray, NSNumber, NSURL;


#import "SABaseClientBoundCommand.h"

@interface SAMPCreateRadioStation : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *assetInfo;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSNumber *startPlaying;
@property (copy, nonatomic) NSURL *stationUrl;


+(id)createRadioStation;
+(id)createRadioStationWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif