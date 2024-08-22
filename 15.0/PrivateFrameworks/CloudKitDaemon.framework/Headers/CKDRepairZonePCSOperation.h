// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDREPAIRZONEPCSOPERATION_H
#define CKDREPAIRZONEPCSOPERATION_H

@class NSMutableArray, NSMutableDictionary, NSArray;
@protocol CKRepairZonePCSOperationCallbacks;


#import "CKDDatabaseOperation.h"

@interface CKDRepairZonePCSOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSObject<CKRepairZonePCSOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSMutableArray *fetchedZones; // ivar: _fetchedZones
@property (retain, nonatomic) NSMutableArray *fixedZones; // ivar: _fixedZones
@property (retain, nonatomic) NSMutableDictionary *pcsInfoByZoneID; // ivar: _pcsInfoByZoneID
@property (nonatomic) NSUInteger state;
@property (retain, nonatomic) NSArray *zoneIDs; // ivar: _zoneIDs
@property (copy, nonatomic) id *zonePCSRepairProgressBlock; // ivar: _zonePCSRepairProgressBlock


-(BOOL)makeStateTransition;
-(id)_checkPCSDataForZone:(id)arg0 ;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(void)_checkZonePCS;
-(void)_fetchZones;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_uploadRepairedZones;
-(void)main;


@end


#endif