// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDAANCHOR_H
#define WDAANCHOR_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface WDAAnchor : NSObject

@property (nonatomic) BOOL allowOverlap; // ivar: mAllowOverlap
@property (nonatomic) CGRect bounds; // ivar: mBounds
@property (nonatomic) int horizontalPosition; // ivar: mHorizontalPosition
@property (nonatomic) int relativeHorizontalPosition; // ivar: mRelativeHorizontalPosition
@property (nonatomic) int relativeVerticalPosition; // ivar: mRelativeVerticalPosition
@property (retain, nonatomic) NSArray *textWrapPoints; // ivar: mTextWrapPoints
@property (nonatomic) int textWrappingMode; // ivar: mTextWrappingMode
@property (nonatomic) int textWrappingModeType; // ivar: mTextWrappingModeType
@property (nonatomic) int verticalPosition; // ivar: mVerticalPosition
@property (nonatomic) CGFloat wrapDistanceBottom; // ivar: mWrapDistanceBottom
@property (nonatomic) CGFloat wrapDistanceLeft; // ivar: mWrapDistanceLeft
@property (nonatomic) CGFloat wrapDistanceRight; // ivar: mWrapDistanceRight
@property (nonatomic) CGFloat wrapDistanceTop; // ivar: mWrapDistanceTop
@property (nonatomic) NSInteger zIndex; // ivar: mZIndex


+(id)stringForTextWrappingModeType:(int)arg0 ;
-(id)description;
-(id)init;


@end


#endif