// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCPERSONALIZATIONDATAMIGRATOR_H
#define FCPERSONALIZATIONDATAMIGRATOR_H

@class NSString;
@protocol FCKeyValueStoreMigrating;

#import <Foundation/Foundation.h>


@interface FCPersonalizationDataMigrator : NSObject <FCKeyValueStoreMigrating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *treatmentProvider; // ivar: _treatmentProvider


-(BOOL)keyValueStore:(id)arg0 canMigrateFromVersion:(NSUInteger)arg1 ;
-(id)initWithTreatmentProvider:(id)arg0 ;
-(id)keyValueStore:(id)arg0 migrateObject:(id)arg1 forKey:(id)arg2 fromVersion:(NSUInteger)arg3 ;
-(void)upgradeFromVersion2:(id)arg0 ;


@end


#endif