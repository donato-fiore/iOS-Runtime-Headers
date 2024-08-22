// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAFMFGEOFENCESET_H
#define SAFMFGEOFENCESET_H

@class NSNumber, NSString;


#import "SADomainCommand.h"
#import "SAPerson.h"
#import "SALocation.h"

@interface SAFmfGeoFenceSet : SADomainCommand

@property (copy, nonatomic) NSNumber *enable;
@property (copy, nonatomic) NSString *fenceType;
@property (retain, nonatomic) SAPerson *friend;
@property (copy, nonatomic) NSString *geoFenceTrigger;
@property (copy, nonatomic) NSNumber *oneTimeOnly;
@property (retain, nonatomic) SALocation *requestedLocation;
@property (retain, nonatomic) SAPerson *theFriend;


+(id)geoFenceSet;
+(id)geoFenceSetWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif