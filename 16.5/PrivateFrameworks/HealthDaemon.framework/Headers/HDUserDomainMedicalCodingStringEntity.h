// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDUSERDOMAINMEDICALCODINGSTRINGENTITY_H
#define HDUSERDOMAINMEDICALCODINGSTRINGENTITY_H



#import "HDHealthEntity.h"

@interface HDUserDomainMedicalCodingStringEntity : HDHealthEntity



+(BOOL)enumerateMedicalCodingStringsWithPredicate:(id)arg0 transaction:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)persistentIDForString:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)stringForPersistentID:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif