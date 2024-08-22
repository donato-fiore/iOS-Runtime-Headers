// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSIMPLEGRAPHDATABASEMIGRATIONSTEP_H
#define HDSIMPLEGRAPHDATABASEMIGRATIONSTEP_H


#import <Foundation/Foundation.h>


@interface HDSimpleGraphDatabaseMigrationStep : NSObject

@property (readonly, nonatomic) *unk function; // ivar: _function
@property (readonly, nonatomic) NSInteger toVersion; // ivar: _toVersion


+(id)migrationToVersion:(NSInteger)arg0 function:(*unk)arg1 ;
-(id)description;


@end


#endif