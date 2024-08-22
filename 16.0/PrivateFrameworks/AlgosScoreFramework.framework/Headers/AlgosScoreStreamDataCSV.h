// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ALGOSSCORESTREAMDATACSV_H
#define ALGOSSCORESTREAMDATACSV_H

@class NSDictionary;


#import "AlgosScoreDataCSV.h"

@interface AlgosScoreStreamDataCSV : AlgosScoreDataCSV

@property (nonatomic) BOOL isMusic; // ivar: _isMusic
@property (retain, nonatomic) NSDictionary *methods; // ivar: _methods


+(id)streamDataCSV:(BOOL)arg0 ;
-(BOOL)matchesMethod:(id)arg0 code:(NSInteger)arg1 ;
-(BOOL)validMethod:(NSInteger)arg0 ;
-(id)initIsMusic:(BOOL)arg0 ;
-(id)setUpMethods;
-(int)transformer;


@end


#endif