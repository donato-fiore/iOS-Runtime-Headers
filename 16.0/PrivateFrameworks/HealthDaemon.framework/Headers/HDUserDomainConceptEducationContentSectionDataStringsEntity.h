// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDUSERDOMAINCONCEPTEDUCATIONCONTENTSECTIONDATASTRINGSENTITY_H
#define HDUSERDOMAINCONCEPTEDUCATIONCONTENTSECTIONDATASTRINGSENTITY_H



#import "HDHealthEntity.h"

@interface HDUserDomainConceptEducationContentSectionDataStringsEntity : HDHealthEntity



+(BOOL)addSectionDataStringsToCodable:(id)arg0 sectionDataID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)enumerateSectionDataStringsForEducationContentSectionDataID:(NSInteger)arg0 transaction:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(BOOL)insertEducationContentSectionDataString:(id)arg0 sectionDataPersistentID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif