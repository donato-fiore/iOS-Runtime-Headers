// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3DATABASERECOVERYOPERATION_H
#define ML3DATABASERECOVERYOPERATION_H

@class NSOperation, NSError, NSString;



@interface ML3DatabaseRecoveryOperation : NSOperation

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSString *path; // ivar: _path


-(id)_createSQLiteErrorWithCode:(int)arg0 description:(id)arg1 ;
-(id)_lastCorruptionRestoreAttemptDate;
-(id)initWithDatabaseFilePath:(id)arg0 ;
-(void)_recreateDatabaseWithCompletion:(id)arg0 ;
-(void)_updateLastCorruptionRestoreAttemptDate;
-(void)main;


@end


#endif