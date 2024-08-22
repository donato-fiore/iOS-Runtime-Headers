// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLINICALAUTHORIZATIONSESSIONENTITY_H
#define HDCLINICALAUTHORIZATIONSESSIONENTITY_H



#import "HDHealthEntity.h"

@interface HDClinicalAuthorizationSessionEntity : HDHealthEntity



+(NSInteger)protectionClass;
+(id)checkConstraints;
+(id)databaseTable;
+(id)foreignKeys;
+(id)joinClausesForProperty:(id)arg0 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif