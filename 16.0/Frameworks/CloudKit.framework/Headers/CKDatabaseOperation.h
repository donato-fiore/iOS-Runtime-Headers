// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDATABASEOPERATION_H
#define CKDATABASEOPERATION_H



#import "CKOperation.h"
#import "CKDatabase.h"
#import "CKDatabaseOperationInfo.h"

@interface CKDatabaseOperation : CKOperation

@property (retain, nonatomic) CKDatabase *database; // ivar: _database
@property (readonly, nonatomic) CKDatabaseOperationInfo *operationInfo;


-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)zoneIDHasCorrectDatabaseScope:(id)arg0 error:(*id)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;


@end


#endif