// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVSQLITEDATABASE_H
#define CKVSQLITEDATABASE_H

@class NSMutableDictionary, NSString;
@protocol CKVDatabase;

#import <Foundation/Foundation.h>


@interface CKVSQLiteDatabase : NSObject <CKVDatabase>

 {
    *sqlite3 _handle;
    NSMutableDictionary *_cachedSQLiteStatements;
}


@property (readonly, nonatomic) NSInteger accessPermission; // ivar: _accessPermission
@property (readonly, nonatomic) NSInteger dataProtectionClass; // ivar: _dataProtectionClass
@property (readonly, nonatomic) NSInteger databaseOptions; // ivar: _databaseOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger threadingMode; // ivar: _threadingMode


-(BOOL)beginTransactionWithError:(*id)arg0 ;
-(BOOL)cleanupWithError:(*id)arg0 ;
-(BOOL)closeWithError:(*id)arg0 ;
-(BOOL)commitTransactionWithError:(*id)arg0 ;
-(BOOL)executeCommand:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)executeCommandString:(id)arg0 error:(*id)arg1 ;
-(BOOL)openWithError:(*id)arg0 ;
-(BOOL)rollbackTransactionWithError:(*id)arg0 ;
-(id)executeCommand:(id)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithPath:(id)arg0 accessPermission:(NSInteger)arg1 threadingMode:(NSInteger)arg2 dataProtectionClass:(NSInteger)arg3 databaseOptions:(NSInteger)arg4 ;


@end


#endif