// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKSECUREDATABASERESETOPERATION_H
#define FCCKSECUREDATABASERESETOPERATION_H



#import "FCOperation.h"
#import "FCCKPrivateDatabase.h"

@interface FCCKSecureDatabaseResetOperation : FCOperation

@property (retain, nonatomic) FCCKPrivateDatabase *database; // ivar: _database
@property (nonatomic) BOOL deleteZones; // ivar: _deleteZones
@property (copy, nonatomic) id *resetCompletionHandler; // ivar: _resetCompletionHandler
@property (nonatomic) BOOL restoreSecureSentinel; // ivar: _restoreSecureSentinel
@property (nonatomic) BOOL restoreZoneContents; // ivar: _restoreZoneContents


-(BOOL)validateOperation;
-(id)_rawRecordsToSave;
-(id)_rawZoneIDsToDelete;
-(id)_rawZonesToRecreate;
-(id)_recreateZones;
-(id)init;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif