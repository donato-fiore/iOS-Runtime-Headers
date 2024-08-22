// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRREPAIRHISTORY_H
#define CRREPAIRHISTORY_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CRRepairHistory : NSObject {
    NSDictionary *repairHistoryMap;
}




-(BOOL)hasHadRCHLBasedRepairForComponent:(id)arg0 withHistory:(id)arg1 ;
-(BOOL)isRCHLRepairHistoryDevice;
-(id)CAABasedRepairDateForComponent:(id)arg0 withHistory:(id)arg1 ;
-(id)RCHLBasedRepairDateForComponent:(id)arg0 withHistory:(id)arg1 ;
-(id)extractRCHLRepairHistory;
-(id)extractRepairsAfterACRZWithHistory:(id)arg0 ;
-(id)init;
-(id)repairDateForComponent:(id)arg0 withRCHLHistory:(id)arg1 withCAAHistory:(id)arg2 ;


@end


#endif