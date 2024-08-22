// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAFMFGEOFENCE_H
#define SAFMFGEOFENCE_H

@class NSString;


#import "SADomainObject.h"
#import "SAPersonAttribute.h"
#import "SALocation.h"

@interface SAFmfGeoFence : SADomainObject

@property (retain, nonatomic) SAPersonAttribute *friend;
@property (copy, nonatomic) NSString *geoFenceTrigger;
@property (retain, nonatomic) SALocation *location;
@property (retain, nonatomic) SAPersonAttribute *theFriend;


+(id)geoFence;
+(id)geoFenceWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif