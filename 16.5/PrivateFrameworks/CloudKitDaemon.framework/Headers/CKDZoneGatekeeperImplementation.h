// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDZONEGATEKEEPERIMPLEMENTATION_H
#define CKDZONEGATEKEEPERIMPLEMENTATION_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CKDZoneGatekeeperImplementation : NSObject

@property (retain, nonatomic) NSMutableArray *waiterWrappers; // ivar: _waiterWrappers
@property (retain, nonatomic) NSMutableDictionary *zoneIDsToGateHolders; // ivar: _zoneIDsToGateHolders


-(BOOL)hasStatusToReport;
-(id)CKStatusReportArray;
-(id)init;
-(void)registerWaiter:(id)arg0 forZoneIDs:(id)arg1 completionHandler:(id)arg2 ;
-(void)relinquishLocksForWaiter:(id)arg0 deferRelinquish:(BOOL)arg1 ;


@end


#endif