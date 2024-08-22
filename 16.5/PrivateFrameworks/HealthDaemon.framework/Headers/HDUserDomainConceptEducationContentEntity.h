// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDUSERDOMAINCONCEPTEDUCATIONCONTENTENTITY_H
#define HDUSERDOMAINCONCEPTEDUCATIONCONTENTENTITY_H

@class NSString;
@protocol HDUserDomainConceptDataEntity;


#import "HDHealthEntity.h"

@interface HDUserDomainConceptEducationContentEntity : HDHealthEntity <HDUserDomainConceptDataEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)addPropertyDataToCodable:(id)arg0 userDomainConceptID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)insertDataForUserDomainConcept:(id)arg0 userDomainConceptID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)retrieveDataForUserDomainConcept:(id)arg0 userDomainConceptID:(NSInteger)arg1 mutableUserDomainConceptProperties:(id)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(BOOL)willDeleteUserDomainConcept:(id)arg0 userDomainConceptID:(NSInteger)arg1 syncProvenance:(NSInteger)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(id)privateSubEntities;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif