// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCAUDIOPLAYLISTMIGRATOR_H
#define FCAUDIOPLAYLISTMIGRATOR_H

@class NSString;
@protocol FCKeyValueStoreMigrating;

#import <Foundation/Foundation.h>


@interface FCAudioPlaylistMigrator : NSObject <FCKeyValueStoreMigrating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)keyValueStore:(id)arg0 canMigrateFromVersion:(NSUInteger)arg1 ;
-(id)keyValueStore:(id)arg0 migrateObject:(id)arg1 forKey:(id)arg2 fromVersion:(NSUInteger)arg3 ;


@end


#endif