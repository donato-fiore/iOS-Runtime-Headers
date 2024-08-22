// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSBACKLIGHTSCENEUPDATEACTION_H
#define BLSBACKLIGHTSCENEUPDATEACTION_H

@class BSAction;


#import "BLSBacklightChangeEvent.h"

@interface BLSBacklightSceneUpdateAction : BSAction

@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, nonatomic) BLSBacklightChangeEvent *event;
@property (readonly, nonatomic) BOOL isUpdateToDateSpecifier;
@property (readonly, nonatomic, getter=isTouchTargetable) BOOL touchTargetable;


-(id)initWithBacklightChangeEvent:(id)arg0 animated:(BOOL)arg1 touchTargetable:(BOOL)arg2 isUpdateToDateSpecifier:(BOOL)arg3 completion:(id)arg4 ;


@end


#endif