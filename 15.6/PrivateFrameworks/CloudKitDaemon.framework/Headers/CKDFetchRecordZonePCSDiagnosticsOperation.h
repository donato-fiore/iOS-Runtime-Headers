// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDFETCHRECORDZONEPCSDIAGNOSTICSOPERATION_H
#define CKDFETCHRECORDZONEPCSDIAGNOSTICSOPERATION_H

@class NSString, NSDictionary, CKPCSDiagnosticInformation, NSArray;


#import "CKDDatabaseOperation.h"

@interface CKDFetchRecordZonePCSDiagnosticsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSString *identityStatus; // ivar: _identityStatus
@property (retain, nonatomic) NSDictionary *invalidPCSByZoneID; // ivar: _invalidPCSByZoneID
@property (retain, nonatomic) CKPCSDiagnosticInformation *pcsDiagnosticInfo; // ivar: _pcsDiagnosticInfo
@property (retain, nonatomic) NSArray *recordZoneIDs; // ivar: _recordZoneIDs
@property (retain, nonatomic) NSDictionary *validPCSByZoneID; // ivar: _validPCSByZoneID


-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)relevantZoneIDs;
-(int)operationType;
-(void)_handleRecordZoneFetch:(id)arg0 zoneID:(id)arg1 responseCode:(id)arg2 ;
-(void)main;


@end


#endif