// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDUSERDOMAINCONCEPTEDUCATIONCONTENTSECTIONENTITY_H
#define HDUSERDOMAINCONCEPTEDUCATIONCONTENTSECTIONENTITY_H



#import "HDHealthEntity.h"

@interface HDUserDomainConceptEducationContentSectionEntity : HDHealthEntity



+(BOOL)addSectionsToCodable:(id)arg0 educationContentID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)enumerateLocalizedEducationContentSectionsWithEducationContentID:(NSInteger)arg0 transaction:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(BOOL)insertLocalizedEducationContentSectionsFor:(id)arg0 educationContentID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(id)privateSubEntities;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif