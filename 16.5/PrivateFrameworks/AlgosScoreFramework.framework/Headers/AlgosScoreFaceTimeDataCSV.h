// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ALGOSSCOREFACETIMEDATACSV_H
#define ALGOSSCOREFACETIMEDATACSV_H

@class NSDictionary;


#import "AlgosScoreDataCSV.h"

@interface AlgosScoreFaceTimeDataCSV : AlgosScoreDataCSV

@property (retain, nonatomic) NSDictionary *methods; // ivar: _methods


+(id)facetimeDataCSV;
-(BOOL)matchesMethod:(id)arg0 code:(NSInteger)arg1 ;
-(BOOL)validMethod:(NSInteger)arg0 ;
-(id)init;
-(id)setUpMethods;
-(int)transformer;


@end


#endif