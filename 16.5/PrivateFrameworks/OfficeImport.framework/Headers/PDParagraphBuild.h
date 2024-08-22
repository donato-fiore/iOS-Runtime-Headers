// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDPARAGRAPHBUILD_H
#define PDPARAGRAPHBUILD_H

@class NSMutableArray;


#import "PDBuild.h"

@interface PDParagraphBuild : PDBuild {
    NSMutableArray *mTimeNodeDataList;
    CGFloat mAutoAdvanceTime;
    BOOL mIsReversedParagraphOrder;
    int mBuildLevel;
    int mType;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isReversedParagraphOrder;
-(CGFloat)autoAdvanceTime;
-(NSUInteger)hash;
-(NSUInteger)timeNodeDataListCount;
-(id)addTimeNodeData;
-(id)init;
-(id)timeNodeDataAtIndex:(NSUInteger)arg0 ;
-(id)timeNodeDataList;
-(int)buildLevel;
-(int)type;
-(void)setAutoAdvanceTime:(CGFloat)arg0 ;
-(void)setBuildLevel:(int)arg0 ;
-(void)setIsReversedParagraphOrder:(BOOL)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif