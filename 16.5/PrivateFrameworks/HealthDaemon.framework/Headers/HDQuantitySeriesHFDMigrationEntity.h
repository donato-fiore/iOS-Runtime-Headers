// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDQUANTITYSERIESHFDMIGRATIONENTITY_H
#define HDQUANTITYSERIESHFDMIGRATIONENTITY_H

@protocol HDSeriesHFDMigrationEntity;

#import <Foundation/Foundation.h>


@interface HDQuantitySeriesHFDMigrationEntity : NSObject <HDSeriesHFDMigrationEntity>





+(BOOL)migrateDataFromDataStore:(*void)arg0 to:(*void)arg1 database:(id)arg2 recoveryAnalytics:(id)arg3 error:(*id)arg4 ;
+(BOOL)migrateDataToSQLFromStore:(*void)arg0 database:(id)arg1 error:(*id)arg2 ;


@end


#endif