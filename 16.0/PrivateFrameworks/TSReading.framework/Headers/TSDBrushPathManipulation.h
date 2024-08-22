// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDBRUSHPATHMANIPULATION_H
#define TSDBRUSHPATHMANIPULATION_H

@class NSMutableDictionary, NSMutableArray;


#import "TSDPathManipulation.h"

@interface TSDBrushPathManipulation : TSDPathManipulation {
    *CGPath mBrushStroke;
    CGFloat mRepeatLength;
    NSMutableDictionary *mSections;
    NSMutableArray *mMiddleSections;
    NSMutableArray *mSmallSections;
    CGFloat mSmallLimitWidth;
    BOOL mSplitAtSharpAngles;
}






@end


#endif