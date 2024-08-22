// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDUSERDOMAINCONCEPTEDUCATIONCONTENTSECTIONDATAENTITY_H
#define HDUSERDOMAINCONCEPTEDUCATIONCONTENTSECTIONDATAENTITY_H



#import "HDHealthEntity.h"

@interface HDUserDomainConceptEducationContentSectionDataEntity : HDHealthEntity



+(BOOL)addSectionDataToCodable:(id)arg0 educationContentSectionID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)enumerateSectionDataForEducationContentSectionID:(NSInteger)arg0 transaction:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(BOOL)insertEducationContentSectionData:(id)arg0 sectionPersistentID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(id)privateSubEntities;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif