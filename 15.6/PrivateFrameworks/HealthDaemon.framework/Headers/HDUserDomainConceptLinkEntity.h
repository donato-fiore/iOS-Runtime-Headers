// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDUSERDOMAINCONCEPTLINKENTITY_H
#define HDUSERDOMAINCONCEPTLINKENTITY_H

@class NSString;
@protocol HDUserDomainConceptDataEntity;


#import "HDHealthEntity.h"

@interface HDUserDomainConceptLinkEntity : HDHealthEntity <HDUserDomainConceptDataEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)addPropertyDataToCodable:(id)arg0 userDomainConceptID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)insertDataForUserDomainConcept:(id)arg0 userDomainConceptID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)retrieveDataForUserDomainConcept:(id)arg0 userDomainConceptID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)unitTesting_enumerateConceptLinksWithPredicate:(id)arg0 transaction:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(BOOL)willDeleteUserDomainConcept:(id)arg0 userDomainConceptID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif