// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKWEBSERVICECARACCESSFEATURE_H
#define PKWEBSERVICECARACCESSFEATURE_H

@class NSArray;


#import "PKWebServiceRegionFeature.h"
#import "PKOSVersionRequirementRange.h"

@interface PKWebServiceCarAccessFeature : PKWebServiceRegionFeature

@property (readonly, nonatomic) PKOSVersionRequirementRange *friendSharingOSVersionRequirement; // ivar: _friendSharingOSVersionRequirement
@property (readonly, nonatomic) PKOSVersionRequirementRange *ownerSharingOSVersionRequirement; // ivar: _ownerSharingOSVersionRequirement
@property (readonly, copy, nonatomic) NSArray *supportedTerminals; // ivar: _supportedTerminals


-(id)initWithDictionary:(id)arg0 region:(id)arg1 ;
-(id)localizedNameForIssuerWithIdentifier:(id)arg0 ;


@end


#endif