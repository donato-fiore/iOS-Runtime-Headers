// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIFOCUSMOVEMENTHINT_H
#define UIFOCUSMOVEMENTHINT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UIFocusMovementHint : NSObject <NSCopying>



@property (readonly, nonatomic) CATransform3D interactionTransform;
@property (readonly, nonatomic) CGVector movementDirection; // ivar: _movementDirection
@property (readonly, nonatomic) CATransform3D perspectiveTransform;
@property (readonly, nonatomic) CGVector rotation;
@property (nonatomic) CGFloat rotationAmount; // ivar: _rotationAmount
@property (readonly, nonatomic) CGVector translation;
@property (nonatomic) CGFloat translationAmount; // ivar: _translationAmount


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMovementDirection:(struct CGVector )arg0 itemSize:(struct CGSize )arg1 ;


@end


#endif