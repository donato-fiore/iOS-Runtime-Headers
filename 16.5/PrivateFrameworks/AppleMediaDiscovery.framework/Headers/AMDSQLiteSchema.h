// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDSQLITESCHEMA_H
#define AMDSQLITESCHEMA_H

@class NSString, NSDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface AMDSQLiteSchema : NSObject

@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSDictionary *schemaDict; // ivar: _schemaDict
@property (retain, nonatomic) NSDictionary *streamToTableMap; // ivar: _streamToTableMap
@property (retain, nonatomic) NSDictionary *tables; // ivar: _tables
@property (retain, nonatomic) NSString *version; // ivar: _version
@property (retain, nonatomic) NSNumber *versionNumber; // ivar: _versionNumber


+(id)fetchColumnSpecsForTable:(id)arg0 ;
-(id)getCreateTableStatementFor:(id)arg0 ;
-(id)getInsertStatementFor:(id)arg0 hasColumns:(id)arg1 requiresColumns:(*id)arg2 ;
-(id)getName;
-(id)getSchemaDict;
-(id)getSchemaForTable:(id)arg0 ;
-(id)getStreamToTableMap;
-(id)getTableForStream:(id)arg0 ;
-(id)getTables;
-(id)getVersion;
-(id)getVersionNumber;
-(id)initWithDict:(id)arg0 error:(*id)arg1 ;


@end


#endif