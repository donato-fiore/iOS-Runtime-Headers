// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCFEATURESTATEFFSETTING_H
#define DOCFEATURESTATEFFSETTING_H

@class NSString;


#import "DOCFeatureState.h"

@interface DOCFeatureStateFFSetting : DOCFeatureState

@property (retain) NSString *domainID; // ivar: _domainID
@property (retain) NSString *featureID; // ivar: _featureID
@property NSInteger valueMode; // ivar: _valueMode


-(id)initWithDomainID:(id)arg0 featureID:(id)arg1 valueMode:(NSInteger)arg2 ;


@end


#endif