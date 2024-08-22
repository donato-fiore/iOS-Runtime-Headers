// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFLOATINGCARDANIMATIONMANAGER_H
#define PXFLOATINGCARDANIMATIONMANAGER_H


#import <Foundation/Foundation.h>

#import "PXFloatingCardAnimation.h"

@interface PXFloatingCardAnimationManager : NSObject {
    PXFloatingCardAnimation *_heightAnimation;
    NSUInteger _heightAnimationPushCount;
}


@property (readonly, nonatomic) PXFloatingCardAnimation *heightAnimation;


-(id)defaultHeightAnimation;
-(void)popHeightAnimation;
-(void)pushHeightAnimation:(id)arg0 ;


@end


#endif