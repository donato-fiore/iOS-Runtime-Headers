// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFMESSAGESSTACKLAYOUTFRAMESOLVER_H
#define PFMESSAGESSTACKLAYOUTFRAMESOLVER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PFMessagesStackLayoutFrameSolver : NSObject

@property (copy, nonatomic) NSArray *normalizedHorizontalOffsets; // ivar: _normalizedHorizontalOffsets
@property (nonatomic) CGFloat normalizedSizeTransform; // ivar: _normalizedSizeTransform
@property (nonatomic) CGFloat normalizedVerticalInsets; // ivar: _normalizedVerticalInsets
@property (nonatomic) CGFloat normalizedVerticalOffset; // ivar: _normalizedVerticalOffset
@property (nonatomic) CGFloat rotationAngle; // ivar: _rotationAngle
@property (nonatomic) NSInteger stackedItemsCount; // ivar: _stackedItemsCount


-(id)init;
-(void)getGeometries:(struct ? *)arg0 count:(NSUInteger)arg1 ;


@end


#endif