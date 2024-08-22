// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPUFALLANIMATORDYNAMICITEM_H
#define _MPUFALLANIMATORDYNAMICITEM_H

@class UIBezierPath, NSString;
@protocol UIDynamicItem;

#import <Foundation/Foundation.h>


@interface _MPUFallAnimatorDynamicItem : NSObject <UIDynamicItem>



@property (nonatomic) CGRect bounds; // ivar: _bounds
@property (nonatomic) CGPoint center; // ivar: _center
@property (readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property (readonly, nonatomic) NSUInteger collisionBoundsType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGAffineTransform transform; // ivar: _transform




@end


#endif