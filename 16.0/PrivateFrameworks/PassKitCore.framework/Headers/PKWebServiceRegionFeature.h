// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKWEBSERVICEREGIONFEATURE_H
#define PKWEBSERVICEREGIONFEATURE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PKOSVersionRequirementRange.h"

@interface PKWebServiceRegionFeature : NSObject

@property (readonly, nonatomic) BOOL automaticRegister; // ivar: _automaticRegister
@property (readonly, nonatomic) float enablementThreshold; // ivar: _enablementThreshold
@property (readonly, nonatomic) NSInteger featureType; // ivar: _featureType
@property (readonly, copy, nonatomic) NSString *region; // ivar: _region
@property (readonly, nonatomic) NSInteger registrationType; // ivar: _registrationType
@property (readonly, nonatomic) PKOSVersionRequirementRange *versionRange; // ivar: _versionRange


+(id)regionFeatureWithType:(NSInteger)arg0 dictionary:(id)arg1 region:(id)arg2 ;
-(id)initWithFeatureType:(NSInteger)arg0 dictionary:(id)arg1 region:(id)arg2 ;


@end


#endif