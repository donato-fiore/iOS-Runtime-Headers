// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDMATCHINGALGORITHM_H
#define TSDMATCHINGALGORITHM_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSDMatchingAlgorithm : NSObject {
    *NSInteger mCostMatrix;
    char * mMaskMatrix;
    *BOOL mIsStarInColumn;
    *BOOL mIsStarInRow;
    *BOOL mIsColCovered;
    *BOOL mIsRowCovered;
    *id mObjectMapping;
    NSInteger mMatrixDimension;
    NSInteger mZ0Row;
    NSInteger mZ0Col;
    NSMutableArray *mResults;
}




+(id)bestMatchesFromArray:(id)arg0 ;
-(BOOL)p_step4FindAZeroAndReturnRow:(*int)arg0 column:(*int)arg1 ;
-(id)p_bestMatchesFromArray:(id)arg0 ;
-(int)p_doStep1;
-(int)p_doStep2;
-(int)p_doStep3;
-(int)p_doStep4;
-(int)p_doStep5;
-(int)p_doStep6;
-(int)p_step4IndexOfStarredZeroInRow:(int)arg0 ;
-(void)p_allocateMatrices;
-(void)p_deallocateMatrices;


@end


#endif