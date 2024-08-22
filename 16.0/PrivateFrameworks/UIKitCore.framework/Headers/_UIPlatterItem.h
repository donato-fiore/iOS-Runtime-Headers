// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPLATTERITEM_H
#define _UIPLATTERITEM_H

@class NSString;
@protocol UIDynamicItem;

#import <Foundation/Foundation.h>

#import "UIBezierPath.h"
#import "UIView.h"

@interface _UIPlatterItem : NSObject <UIDynamicItem>



@property (readonly, nonatomic) CGRect bounds;
@property (nonatomic) CGPoint center;
@property (readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property (readonly, nonatomic) NSUInteger collisionBoundsType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) UIView *heldView; // ivar: _heldView
@property (readonly) Class superclass;
@property (nonatomic) CGAffineTransform transform;


-(id)initWithView:(id)arg0 ;


@end


#endif