// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMLTRAININGDATABASEMIGRATIONS_H
#define PMLTRAININGDATABASEMIGRATIONS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PMLTrainingDatabaseMigrations : NSObject

@property (readonly, nonatomic) unsigned int maxVersion;
@property (readonly, nonatomic) NSDictionary *migrations; // ivar: _migrations


+(id)mockMigrationsByAddingQueries:(id)arg0 ;
+(id)skipFromZeroSchema:(*unsigned int)arg0 ;
-(id)init;
-(id)initWithMigrations:(id)arg0 ;


@end


#endif