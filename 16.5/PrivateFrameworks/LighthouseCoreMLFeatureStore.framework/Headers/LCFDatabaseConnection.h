// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LCFDATABASECONNECTION_H
#define LCFDATABASECONNECTION_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface LCFDatabaseConnection : NSObject

@property (readonly, nonatomic) NSURL *databaseBaseURL; // ivar: _databaseBaseURL
@property (readonly, nonatomic) NSString *databaseName; // ivar: _databaseName
@property (readonly, nonatomic) NSString *databaseNamePath; // ivar: _databaseNamePath
@property (readonly, nonatomic) NSString *tableName; // ivar: _tableName


-(BOOL)addColumn:(id)arg0 ;
-(BOOL)doQueryEachStep:(id)arg0 statementStepHandler:(id)arg1 ;
-(BOOL)doQueryExec:(id)arg0 ;
-(BOOL)writeFeatures:(id)arg0 ;
-(id)getColumns;
-(id)init:(id)arg0 databaseName:(id)arg1 tableName:(id)arg2 ;
-(id)query:(id)arg0 startTime:(id)arg1 endTime:(id)arg2 reversed:(BOOL)arg3 ;
-(void)dumpDatabase;
-(void)ensureDatabaseTable;


@end


#endif