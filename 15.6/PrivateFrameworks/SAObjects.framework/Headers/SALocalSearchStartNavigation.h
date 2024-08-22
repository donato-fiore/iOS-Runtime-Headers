// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SALOCALSEARCHSTARTNAVIGATION_H
#define SALOCALSEARCHSTARTNAVIGATION_H

@class NSString;


#import "SABaseClientBoundCommand.h"
#import "SALocation.h"

@interface SALocalSearchStartNavigation : SABaseClientBoundCommand

@property (retain, nonatomic) SALocation *destination;
@property (copy, nonatomic) NSString *directionsType;
@property (retain, nonatomic) SALocation *origin;


+(id)startNavigation;
+(id)startNavigationWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif