// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSCONSENSUSDATAMANAGER_H
#define DSCONSENSUSDATAMANAGER_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface DSConsensusDataManager : NSObject {
    CGFloat _windowOfInterest;
}


@property (retain, nonatomic) NSMutableArray *consensusDataArray; // ivar: _consensusDataArray
@property (retain, nonatomic) NSMutableDictionary *consensusDataArrayMap; // ivar: _consensusDataArrayMap
@property (retain, nonatomic) NSMutableDictionary *consensusFrequencyTable; // ivar: _consensusFrequencyTable


-(id)initWithWindowOfInterest:(CGFloat)arg0 ;
-(void)_addDatumToFrequencyTable:(id)arg0 ;
-(void)_addDatumtoDataArrayMap:(id)arg0 ;
-(void)_evictOldestDatum;
-(void)_removeDatumFromDataArrayMap:(id)arg0 ;
-(void)_removeDatumFromFrequencyTable:(id)arg0 ;
-(void)addDatum:(id)arg0 ;
-(void)printConsensusData;
-(void)printConsensusDataFromWindowStart:(CGFloat)arg0 ToWindowEnd:(CGFloat)arg1 ;


@end


#endif