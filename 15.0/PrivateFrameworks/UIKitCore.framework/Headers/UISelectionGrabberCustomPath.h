// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISELECTIONGRABBERCUSTOMPATH_H
#define UISELECTIONGRABBERCUSTOMPATH_H


#import <Foundation/Foundation.h>


@interface UISelectionGrabberCustomPath : NSObject

@property (nonatomic) CGPoint bottomPoint; // ivar: _bottomPoint
@property (readonly, nonatomic) CGRect boundingRect;
@property (readonly, nonatomic) BOOL containsZeroPoint;
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (nonatomic) CGPoint topPoint; // ivar: _topPoint


-(id)description;
-(id)summaryDescription;


@end


#endif