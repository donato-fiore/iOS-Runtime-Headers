// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ALGOSSCORECOMBINER_H
#define ALGOSSCORECOMBINER_H


#import <Foundation/Foundation.h>


@interface AlgosScoreCombiner : NSObject {
    *void combinerData;
}


@property (nonatomic) int debug; // ivar: _debug


+(id)combiner;
-(CGFloat)signedMeanSquaredDeviation;
-(id)init;
-(id)scoreScores:(id)arg0 ;
-(void)addScore:(CGFloat)arg0 weight:(CGFloat)arg1 type:(id)arg2 label:(id)arg3 ;
-(void)clearScores;
-(void)dealloc;


@end


#endif