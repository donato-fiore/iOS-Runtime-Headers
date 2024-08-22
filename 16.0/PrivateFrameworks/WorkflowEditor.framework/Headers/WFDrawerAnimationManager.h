// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDRAWERANIMATIONMANAGER_H
#define WFDRAWERANIMATIONMANAGER_H


#import <Foundation/Foundation.h>

#import "WFDrawerAnimation.h"

@interface WFDrawerAnimationManager : NSObject {
    WFDrawerAnimation *_heightAnimation;
    NSUInteger _heightAnimationPushCount;
}


@property (readonly, nonatomic) WFDrawerAnimation *heightAnimation;


-(id)defaultHeightAnimation;
-(void)popHeightAnimation;
-(void)pushHeightAnimation:(id)arg0 ;


@end


#endif