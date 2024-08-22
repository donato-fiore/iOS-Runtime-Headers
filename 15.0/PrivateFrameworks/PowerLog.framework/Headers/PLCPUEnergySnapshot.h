// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCPUENERGYSNAPSHOT_H
#define PLCPUENERGYSNAPSHOT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLCPUEnergySnapshot : NSObject

@property NSUInteger cpuEnergy; // ivar: _cpuEnergy
@property NSUInteger cpuEnergyBilledToMe; // ivar: _cpuEnergyBilledToMe
@property NSUInteger cpuEnergyBilledToOthers; // ivar: _cpuEnergyBilledToOthers
@property (retain) NSMutableDictionary *mockData; // ivar: _mockData


+(id)coalitionIDToCoalitionNameMapping;
+(id)identifierToAccountingName;
+(id)identifierToCoalitionID;
+(void)setCoalitionIDToCoalitionNameMapping:(id)arg0 ;
+(void)setIdentifierToAccountingName:(id)arg0 ;
+(void)setIdentifierToCoalitionID:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)snapshotCPUEnergy:(id)arg0 ;
-(CGFloat)computeEnergyDiff:(id)arg0 ;
-(CGFloat)computeEnergyDiffUntilNow:(id)arg0 andAdjustSnapshotToNow:(BOOL)arg1 ;
-(id)description;
-(id)getCoalitionIDForIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 andMockData:(id)arg1 ;
-(id)searchCoalitionsCacheForID:(id)arg0 ;
-(void)refreshCoalitionIDMapping;


@end


#endif