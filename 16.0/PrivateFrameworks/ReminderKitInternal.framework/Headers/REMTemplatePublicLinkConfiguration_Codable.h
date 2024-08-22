// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMTEMPLATEPUBLICLINKCONFIGURATION_CODABLE_H
#define REMTEMPLATEPUBLICLINKCONFIGURATION_CODABLE_H

@class REMTemplatePublicLinkConfiguration;



@interface REMTemplatePublicLinkConfiguration_Codable : REMTemplatePublicLinkConfiguration



+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithShouldIncludeHashtags:(BOOL)arg0 shouldIncludeAlarmTriggersBasedOnDateOrTimeInterval:(BOOL)arg1 shouldIncludeAlarmTriggersBasedOnLocationOrVehicle:(BOOL)arg2 ;


@end


#endif