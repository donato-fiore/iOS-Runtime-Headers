// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWANIMATOR_H
#define _UICOLLECTIONVIEWANIMATOR_H

@protocol NSCopying, _UICollectionViewAnimationContext;

#import <Foundation/Foundation.h>

#import "_UICollectionViewAnimationContext.h"

@interface _UICollectionViewAnimator : NSObject <NSCopying>

 {
    id<_UICollectionViewAnimationContext> *_animationContext;
}


@property (retain, nonatomic) _UICollectionViewAnimationContext *animationContext;
@property (readonly, nonatomic) id *handler; // ivar: _handler


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHandler:(id)arg0 ;


@end


#endif