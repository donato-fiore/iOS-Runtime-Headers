// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSSQLITESCHEMAMIGRATION_H
#define AMSSQLITESCHEMAMIGRATION_H

@class NSError;

#import <Foundation/Foundation.h>

#import "AMSSQLiteConnection.h"

@interface AMSSQLiteSchemaMigration : NSObject {
    AMSSQLiteConnection *_connection;
}


@property (readonly) NSError *error; // ivar: _error
@property (readonly) BOOL success; // ivar: _success


-(id)initWithConnection:(id)arg0 ;
-(void)_executeStatement:(id)arg0 canFailMigration:(BOOL)arg1 bindings:(id)arg2 ;
-(void)executeOptionalStatement:(id)arg0 ;
-(void)executeOptionalStatement:(id)arg0 bindings:(id)arg1 ;
-(void)executeStatement:(id)arg0 ;
-(void)executeStatement:(id)arg0 bindings:(id)arg1 ;


@end


#endif