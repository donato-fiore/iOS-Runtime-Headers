// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3DATABASEDISTANTCONNECTION_H
#define ML3DATABASEDISTANTCONNECTION_H

@class NSUUID;
@protocol ML3DatabaseDistantConnectionDelegate;


#import "ML3DatabaseConnection.h"
#import "MLMediaLibraryService.h"

@interface ML3DatabaseDistantConnection : ML3DatabaseConnection {
    MLMediaLibraryService *_mediaLibraryService;
    NSUUID *_currentTransactionID;
    BOOL _connectionOpen;
}


@property (weak, nonatomic) NSObject<ML3DatabaseDistantConnectionDelegate> *distantDelegate; // ivar: _distantDelegate


-(BOOL)_internalBeginTransactionWithBehaviorType:(NSUInteger)arg0 ;
-(BOOL)_internalBeginTransactionWithBehaviorType:(NSUInteger)arg0 isRetry:(BOOL)arg1 ;
-(BOOL)_internalEndTransactionAndCommit:(BOOL)arg0 ;
-(BOOL)_internalExecuteUpdate:(id)arg0 withParameters:(id)arg1 error:(*id)arg2 ;
-(BOOL)_openWithFlags:(int)arg0 ;
-(BOOL)close;
-(BOOL)isOpen;
-(BOOL)isReadOnly;
-(BOOL)registerFunctionName:(id)arg0 argumentCount:(int)arg1 block:(id)arg2 ;
-(BOOL)registerFunctionName:(id)arg0 argumentCount:(int)arg1 functionPointer:(*unk)arg2 userData:(*void)arg3 ;
-(BOOL)registerModule:(id)arg0 ;
-(BOOL)shouldCacheStatements;
-(id)_internalExecuteQuery:(id)arg0 withParameters:(id)arg1 limitProperty:(id)arg2 limitValue:(NSInteger)arg3 ;
-(id)currentTransactionID;
-(id)initWithDatabasePath:(id)arg0 ;
-(id)openBlobInTable:(id)arg0 column:(id)arg1 row:(NSInteger)arg2 readOnly:(BOOL)arg3 ;
-(int)checkpointDatabase;
-(struct sqlite3 *)_sqliteHandle;
-(void)_serviceTerminatedTransactionNotification:(id)arg0 ;
-(void)dealloc;
-(void)setProfilingLevel:(NSInteger)arg0 ;
-(void)setReadOnly:(BOOL)arg0 ;


@end


#endif