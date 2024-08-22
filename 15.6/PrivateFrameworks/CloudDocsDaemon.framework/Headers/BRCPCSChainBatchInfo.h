// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCPCSCHAINBATCHINFO_H
#define BRCPCSCHAINBATCHINFO_H

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "BRCAppLibrary.h"

@interface BRCPCSChainBatchInfo : NSObject {
    NSMutableArray *_fullyChainRecordBatch;
    NSMutableDictionary *_fullyChainRecordInfoMap;
    NSMutableSet *_alreadyHalfChainedRecords;
    NSMutableArray *_recordsForFirstPhase;
    BRCAppLibrary *_appLibrary;
    BOOL _should2PhasePCSChain;
}


@property (readonly, nonatomic) NSUInteger batchCount;
@property (readonly, nonatomic) NSUInteger chainedRecordsCount;
@property (readonly, nonatomic) NSDictionary *halfChainedRecordMap; // ivar: _halfChainedRecordMap
@property (readonly, nonatomic) NSArray *recordsForFirstPhase;
@property (readonly, nonatomic) NSArray *recordsForSecondPhase;
@property (readonly, nonatomic) BOOL should2PhasePCSChain;


-(BOOL)containsRecordInfo:(id)arg0 ;
-(id)initWithAppLibrary:(id)arg0 ;
-(void)_chainPreppedRecordToParent:(id)arg0 ;
-(void)addFullyChainedRecordInfo:(id)arg0 ;
-(void)chainPreparedRecordBatch:(id)arg0 ;
-(void)prepareFirstPhaseRecordBatch;


@end


#endif