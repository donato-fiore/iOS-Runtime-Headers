// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISCENESIZERESTRICTIONS_H
#define UISCENESIZERESTRICTIONS_H


#import <Foundation/Foundation.h>

#import "UIWindowScene.h"

@interface UISceneSizeRestrictions : NSObject {
    BOOL _hasAutomaticMinimumSize;
    BOOL _hasAutomaticMaximumSize;
    UIWindowScene *_scene;
}


@property (nonatomic) CGSize maximumSize; // ivar: _maximumSize
@property (nonatomic) CGSize minimumSize; // ivar: _minimumSize


-(id)_initWithScene:(id)arg0 ;


@end


#endif