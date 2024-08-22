// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCSHAREDDEVICECONFIGURATIONPAYLOAD_H
#define MCSHAREDDEVICECONFIGURATIONPAYLOAD_H

@class NSString, NSDictionary;


#import "MCPayload.h"

@interface MCSharedDeviceConfigurationPayload : MCPayload

@property (readonly, nonatomic) NSString *assetTagInformation; // ivar: _assetTagInformation
@property (readonly, nonatomic) NSDictionary *configuration;
@property (readonly, nonatomic) NSString *lockScreenFootnote; // ivar: _lockScreenFootnote


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;


@end


#endif