// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOWEBDOMAINSETSETTINGMETADATA_H
#define MOWEBDOMAINSETSETTINGMETADATA_H

@class NSSet;


#import "MOSetSettingMetadata.h"

@interface MOWebDomainSetSettingMetadata : MOSetSettingMetadata

@property (readonly, nonatomic) NSSet *defaultValue;


-(id)persistableValueFromValue:(id)arg0 ;
-(id)sanitizePersistableValue:(id)arg0 ;
-(id)valueFromPersistableValue:(id)arg0 ;


@end


#endif