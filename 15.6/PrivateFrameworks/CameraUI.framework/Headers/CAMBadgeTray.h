// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMBADGETRAY_H
#define CAMBADGETRAY_H

@class UIView, NSMutableDictionary, NSString;
@protocol CEKBadgeViewDelegate, CAMBadgeTrayDelegate;


#import "CAMElapsedTimeView.h"
#import "CAMFlashBadge.h"
#import "CAMFocusLockBadge.h"
#import "CAMLivePhotoBadge.h"

@interface CAMBadgeTray : UIView <CEKBadgeViewDelegate>



@property (readonly, nonatomic) NSMutableDictionary *_badgeMap; // ivar: __badgeMap
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CAMBadgeTrayDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CAMElapsedTimeView *elapsedTimeView;
@property (readonly, nonatomic) CAMFlashBadge *flashBadge;
@property (readonly, nonatomic) CAMFocusLockBadge *focusLockBadge;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CAMLivePhotoBadge *livePhotoBadge;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger visibleBadges; // ivar: _visibleBadges


-(NSUInteger)_badgeFontStyle;
-(id)_createControlForType:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_forBadgeTypeInBadgeTypes:(NSUInteger)arg0 do:(id)arg1 ;
-(void)_layoutBadges:(NSUInteger)arg0 withVisibleBadges:(NSUInteger)arg1 ;
-(void)_loadBadgesIfNeededForTypes:(NSUInteger)arg0 ;
-(void)_updateBadgesVisibilityForVisibleBadges:(NSUInteger)arg0 ;
-(void)badgeViewDidChangeIntrinsicContentSize:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif