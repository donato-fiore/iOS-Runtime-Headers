// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSAPPSPECIFICSETTINGSTYPEAPPCONFIGURATIONPREDICATE_H
#define DNDSAPPSPECIFICSETTINGSTYPEAPPCONFIGURATIONPREDICATE_H

@class NSString;
@protocol DNDSAppSpecificSettingsType;

#import <Foundation/Foundation.h>


@interface DNDSAppSpecificSettingsTypeAppConfigurationPredicate : NSObject <DNDSAppSpecificSettingsType>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)appSpecificSettingsClass;
+(Class)appSpecificSettingsEncodedClass;
+(id)appSpecificSettingsEntity;
+(id)appSpecificSettingsForManagedObject:(id)arg0 ;
+(id)appSpecificSettingsFromDictionaryRepresentation:(id)arg0 ;
+(id)dictionaryRepresentationForAppSpecificSettings:(id)arg0 ;
+(void)completeManagedObject:(id)arg0 forAppSpecificSettings:(id)arg1 ;


@end


#endif