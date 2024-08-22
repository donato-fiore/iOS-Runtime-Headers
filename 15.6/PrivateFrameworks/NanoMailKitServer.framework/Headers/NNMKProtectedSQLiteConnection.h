// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NNMKPROTECTEDSQLITECONNECTION_H
#define NNMKPROTECTEDSQLITECONNECTION_H

@class NSString;


#import "NNMKSQLiteConnection.h"

@interface NNMKProtectedSQLiteConnection : NNMKSQLiteConnection

@property (readonly, nonatomic) BOOL protectedDatabaseAttached; // ivar: _protectedDatabaseAttached
@property (retain, nonatomic) NSString *protectedDatabaseName; // ivar: _protectedDatabaseName
@property (retain, nonatomic) NSString *protectedDatabasePath; // ivar: _protectedDatabasePath


-(id)_vfsModuleName;
-(id)initWithUnprotectedDatabaseFileName:(id)arg0 protectedDatabaseFileName:(id)arg1 inDirectory:(id)arg2 protectedDatabaseName:(id)arg3 errorCode:(*int)arg4 ;
-(int)attachProtectedDatabase;
-(void)dettachProtectedDatabase;


@end


#endif