// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFSQLCONNECTION_H
#define EFSQLCONNECTION_H

@class NSHashTable, NSString, NSURL;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface EFSQLConnection : NSObject <EFLoggable>

 {
    NSHashTable *_preparedStatements;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isOpen;
@property (readonly, nonatomic) *sqlite3 sqlDB; // ivar: _sqlDB
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)isSuccessResultCode:(int)arg0 forStep:(BOOL)arg1 error:(*id)arg2 ;
+(BOOL)setFileProtection:(id)arg0 forDatabaseAtURL:(id)arg1 error:(*id)arg2 ;
+(id)log;
-(BOOL)_isSuccessResultCode:(int)arg0 sqlDB:(struct sqlite3 *)arg1 error:(*id)arg2 ;
-(BOOL)beginTransaction:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)commitTransactionWithError:(*id)arg0 ;
-(BOOL)executeStatementString:(id)arg0 error:(*id)arg1 ;
-(BOOL)finalizeStatementsWithError:(*id)arg0 ;
-(BOOL)openWithError:(*id)arg0 ;
-(BOOL)openWithFlags:(int)arg0 error:(*id)arg1 ;
-(BOOL)rollbackTransactionWithError:(*id)arg0 ;
-(id)init;
-(id)initWithInMemoryDatabase;
-(id)initWithSQLDB:(struct sqlite3 *)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)preparedStatementForQueryString:(id)arg0 ;
-(id)resultsForQueryString:(id)arg0 ;
-(void)close;
-(void)flush;


@end


#endif