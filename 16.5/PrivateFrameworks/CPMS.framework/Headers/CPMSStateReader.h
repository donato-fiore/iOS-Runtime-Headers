// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPMSSTATEREADER_H
#define CPMSSTATEREADER_H


#import <Foundation/Foundation.h>


@interface CPMSStateReader : NSObject



+(id)copyCPMSControlStateSnapshots;
+(id)copyCPMSPmaxState:(*int)arg0 ;
+(id)getCPMSControlStateSnapshotDictionary:(struct CPMSPPMControlStateSnapshot *)arg0 ;
+(id)getPowerBudgetDictionary:(struct CPMSPPMPowerBudget *)arg0 ;
+(id)log;
+(id)timescaleDisplayName:(char)arg0 ;


@end


#endif