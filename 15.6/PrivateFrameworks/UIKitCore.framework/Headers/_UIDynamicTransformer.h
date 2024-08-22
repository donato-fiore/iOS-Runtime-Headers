// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDYNAMICTRANSFORMER_H
#define _UIDYNAMICTRANSFORMER_H

@class NSString;
@protocol UIDynamicItem;

#import <Foundation/Foundation.h>

#import "UIBezierPath.h"

@interface _UIDynamicTransformer : NSObject <UIDynamicItem>

 {
    CGPoint _center;
    id *_action;
}


@property (readonly, nonatomic) CGRect bounds;
@property (nonatomic) CGPoint center;
@property (readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property (readonly, nonatomic) NSUInteger collisionBoundsType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGAffineTransform transform;


-(id)initWithActionBlock:(id)arg0 ;


@end


#endif