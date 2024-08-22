// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARACTIVITYITEM_SPLIT_H
#define _UISTATUSBARACTIVITYITEM_SPLIT_H

@class SyncOnly;


#import "_UIStatusBarActivityView.h"
#import "_UIStatusBarActivityIndicator.h"

@interface _UIStatusBarActivityItem_Split : SyncOnly

@property (retain, nonatomic) _UIStatusBarActivityView *activityView; // ivar: _activityView
@property (retain, nonatomic) _UIStatusBarActivityIndicator *syncStartView; // ivar: _syncStartView


+(id)pillDisplayIdentifier;
+(id)syncStartDisplayIdentifier;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg0 ;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg0 ;
-(id)viewForIdentifier:(id)arg0 ;
-(struct UIEdgeInsets )activityIndicatorAlignmentRectInsets;


@end


#endif