// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDONTOLOGYLOCALIZEDSTRINGPROVIDER_H
#define HDONTOLOGYLOCALIZEDSTRINGPROVIDER_H


#import <Foundation/Foundation.h>


@interface HDOntologyLocalizedStringProvider : NSObject



+(id)_localizedLoggingUnitForAttribute:(id)arg0 locale:(id)arg1 propertyType:(NSInteger)arg2 ;
+(id)_nullLocalizedOntologyStringsWithVersion:(NSInteger)arg0 localesToDelete:(id)arg1 propertyType:(NSInteger)arg2 ;
+(id)localizedLoggingUnitsForConcept:(id)arg0 ;
+(id)localizedOntologyPreferredNamesForConcept:(id)arg0 version:(id)arg1 withUserDomainConceptPropertyType:(NSInteger)arg2 ;
+(id)localizedOntologyPreferredNamesForConcept:(id)arg0 withUserDomainConceptPropertyType:(NSInteger)arg1 ;
+(id)nullLocalizedOntologyLoggingUnitsWithVersion:(NSInteger)arg0 withUserDomainConceptPropertyType:(NSInteger)arg1 ;
+(id)nullLocalizedOntologyPreferredNamesWithVersion:(NSInteger)arg0 withUserDomainConceptPropertyType:(NSInteger)arg1 ;


@end


#endif