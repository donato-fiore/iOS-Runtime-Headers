// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCONTINUOUSEXPOSEPENDINGEVICTIONGESTUREMODIFIER_H
#define SBCONTINUOUSEXPOSEPENDINGEVICTIONGESTUREMODIFIER_H



#import "SBGestureSwitcherModifier.h"
#import "SBDisplayItem.h"

@interface SBContinuousExposePendingEvictionGestureModifier : SBGestureSwitcherModifier

@property (retain, nonatomic) SBDisplayItem *itemPendingEviction; // ivar: _itemPendingEviction


-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)initWithGestureID:(id)arg0 displayItemPendingEviction:(id)arg1 ;


@end


#endif