// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVSQLDATABASE_H
#define MSVSQLDATABASE_H

@class NSURL, NSString;
@protocol MSVSQLExecutable;

#import <Foundation/Foundation.h>

#import "_MSVSQLConnection.h"

@interface MSVSQLDatabase : NSObject <MSVSQLExecutable>

 {
    _MSVSQLConnection *_connection;
}


@property (copy, nonatomic) NSURL *databaseURL; // ivar: _databaseURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)executeStatement:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeStatementString:(id)arg0 error:(*id)arg1 ;
-(id)initWithMemory;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(id)markdownTableForSQL:(id)arg0 ;
-(id)markdownTableForStatement:(id)arg0 ;
-(id)markdownTableForTableNamed:(id)arg0 ;
-(id)resultsForStatement:(id)arg0 ;
-(id)statementWithString:(id)arg0 error:(*id)arg1 ;
-(id)transactionWithName:(id)arg0 error:(*id)arg1 ;
// -(void)registerAggregateFunctionNamed:(id)arg0 arguments:(NSInteger)arg1 options:(NSUInteger)arg2 start:(id)arg3 add:(unk)arg4 remove:(id)arg5 value:(unk)arg6  ;
-(void)registerFunctionNamed:(id)arg0 arguments:(NSInteger)arg1 options:(NSUInteger)arg2 block:(id)arg3 ;
-(void)unregisterFunctionNamed:(id)arg0 arguments:(NSInteger)arg1 ;


@end


#endif