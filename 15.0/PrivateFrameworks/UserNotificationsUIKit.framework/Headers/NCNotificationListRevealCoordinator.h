// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONLISTREVEALCOORDINATOR_H
#define NCNOTIFICATIONLISTREVEALCOORDINATOR_H

@class NSString, UIImpactFeedbackGenerator, NSArray;
@protocol NCNotificationListViewScrollDelegate, NCNotificationListRevealCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface NCNotificationListRevealCoordinator : NSObject <NCNotificationListViewScrollDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationListRevealCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (nonatomic, getter=isForceRevealed) BOOL forceRevealed; // ivar: _forceRevealed
@property (nonatomic, getter=isHapticPrepared) BOOL hapticPrepared; // ivar: _hapticPrepared
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger indexForReveal; // ivar: _indexForReveal
@property (nonatomic) CGFloat revealPercentage; // ivar: _revealPercentage
@property (nonatomic) int revealState; // ivar: _revealState
@property (nonatomic, getter=isSectionRevealed) BOOL sectionRevealed; // ivar: _sectionRevealed
@property (nonatomic, getter=isSectionRevealedStateLocked) BOOL sectionRevealedStateLocked; // ivar: _sectionRevealedStateLocked
@property (nonatomic) BOOL shouldLimitTargetContentOffsetForNotificationListReveal; // ivar: _shouldLimitTargetContentOffsetForNotificationListReveal
@property (retain, nonatomic) NSArray *subLists; // ivar: _subLists
@property (readonly) Class superclass;


-(BOOL)_isRevealSectionVisibleForListView:(id)arg0 ;
-(BOOL)_isRevealed;
-(BOOL)_revealSectionHasContent;
-(BOOL)_shouldAllowNotificationListReveal;
-(CGFloat)_settlingYPositionForReveal;
-(CGFloat)_updateRevealPercentageForNotificationListView:(id)arg0 ;
-(id)_revealListView;
-(id)_stringForRevealState:(int)arg0 ;
-(void)_performHaptic;
-(void)_performRevealForSubviewsIfNecessary;
-(void)_prepareHaptic;
-(void)_refetchSubListViews;
-(void)_releaseHaptic;
-(void)notificationListDidScroll:(id)arg0 ;
-(void)notificationListViewWillEndDragging:(id)arg0 withTargetContentOffset:(struct CGPoint *)arg1 ;
-(void)notificationListWillBeginDragging:(id)arg0 ;


@end


#endif