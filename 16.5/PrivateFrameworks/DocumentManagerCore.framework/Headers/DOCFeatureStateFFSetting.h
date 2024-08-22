// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCFEATURESTATEFFSETTING_H
#define DOCFEATURESTATEFFSETTING_H

@class NSString;


#import "DOCFeatureState.h"

@interface DOCFeatureStateFFSetting : DOCFeatureState

@property (retain) NSString *domainID; // ivar: _domainID
@property (retain) NSString *featureID; // ivar: _featureID
@property NSInteger valueMode; // ivar: _valueMode


+(id)defaultsOverrideForDomainID:(id)arg0 featureID:(id)arg1 overrideKey:(id)arg2 ;
-(id)initWithDomainID:(id)arg0 featureID:(id)arg1 overrideKey:(id)arg2 valueMode:(NSInteger)arg3 requirements:(id)arg4 ;


@end


#endif