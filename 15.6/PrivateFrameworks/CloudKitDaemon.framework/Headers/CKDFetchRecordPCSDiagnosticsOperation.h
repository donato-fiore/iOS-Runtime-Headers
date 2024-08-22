// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDFETCHRECORDPCSDIAGNOSTICSOPERATION_H
#define CKDFETCHRECORDPCSDIAGNOSTICSOPERATION_H

@class NSArray, NSMutableArray;


#import "CKDDatabaseOperation.h"

@interface CKDFetchRecordPCSDiagnosticsOperation : CKDDatabaseOperation

@property (readonly, nonatomic) NSArray *corruptRecords;
@property (retain, nonatomic) NSMutableArray *fetchedZones; // ivar: _fetchedZones
@property (retain, nonatomic) NSMutableArray *mutableCorruptRecords; // ivar: _mutableCorruptRecords
@property (nonatomic) NSUInteger state;
@property (retain, nonatomic) NSArray *zoneIDs; // ivar: _zoneIDs


-(BOOL)makeStateTransition;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(void)_checkRecordPCSForAllZones;
-(void)_fetchZones;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)main;


@end


#endif