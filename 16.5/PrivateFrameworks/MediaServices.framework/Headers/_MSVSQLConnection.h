// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MSVSQLCONNECTION_H
#define _MSVSQLCONNECTION_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol MSVSQLExecutable;

#import <Foundation/Foundation.h>


@interface _MSVSQLConnection : NSObject <MSVSQLExecutable>

 {
    *sqlite3 _connectionHandle;
    NSUInteger _options;
    NSMutableDictionary *_attachedDatabases;
    NSMutableArray *_scalarFunctions;
    NSMutableArray *_aggregateFunctions;
    BOOL _invalid;
    NSString *_databaseURI;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)executeStatement:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeStatementString:(id)arg0 error:(*id)arg1 ;
-(id)_cloneWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)resultsForStatement:(id)arg0 ;
-(id)statementWithString:(id)arg0 error:(*id)arg1 ;
-(void)_registerAggregateFunctionDescriptor:(id)arg0 ;
-(void)_registerScalarFunctionDescriptor:(id)arg0 ;
-(void)dealloc;
// -(void)registerAggregateFunctionNamed:(id)arg0 arguments:(NSInteger)arg1 options:(NSUInteger)arg2 start:(id)arg3 add:(unk)arg4 remove:(id)arg5 value:(unk)arg6  ;
-(void)registerFunctionNamed:(id)arg0 arguments:(NSInteger)arg1 options:(NSUInteger)arg2 block:(id)arg3 ;
-(void)unregisterFunctionNamed:(id)arg0 arguments:(NSInteger)arg1 ;


@end


#endif