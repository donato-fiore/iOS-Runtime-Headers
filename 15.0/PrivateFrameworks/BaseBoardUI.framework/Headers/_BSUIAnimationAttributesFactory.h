// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BSUIANIMATIONATTRIBUTESFACTORY_H
#define _BSUIANIMATIONATTRIBUTESFACTORY_H

@class _UIViewAnimationAttributes;


#import "BSUIAnimationFactory.h"

@interface _BSUIAnimationAttributesFactory : BSUIAnimationFactory {
    _UIViewAnimationAttributes *_attributes;
}




-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)delay;
-(CGFloat)duration;
-(NSUInteger)hash;
-(id)description;
-(id)factoryWithTimingFunction:(id)arg0 ;


@end


#endif