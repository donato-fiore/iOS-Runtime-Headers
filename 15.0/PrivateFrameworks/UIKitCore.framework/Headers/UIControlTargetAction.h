// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UICONTROLTARGETACTION_H
#define UICONTROLTARGETACTION_H


#import <Foundation/Foundation.h>

#import "UIAction.h"

@interface UIControlTargetAction : NSObject {
    UIAction *_actionHandler;
    id *_target;
    SEL _action;
    NSUInteger _eventMask;
}


@property (nonatomic) BOOL cancelled; // ivar: _cancelled


-(id)description;


@end


#endif