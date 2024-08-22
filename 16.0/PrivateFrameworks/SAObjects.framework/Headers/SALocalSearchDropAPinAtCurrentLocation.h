// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SALOCALSEARCHDROPAPINATCURRENTLOCATION_H
#define SALOCALSEARCHDROPAPINATCURRENTLOCATION_H



#import "SADomainCommand.h"

@interface SALocalSearchDropAPinAtCurrentLocation : SADomainCommand



+(id)dropAPinAtCurrentLocation;
+(id)dropAPinAtCurrentLocationWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif