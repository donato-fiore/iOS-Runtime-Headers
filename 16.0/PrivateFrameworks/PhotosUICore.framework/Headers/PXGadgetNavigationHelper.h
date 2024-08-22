// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGADGETNAVIGATIONHELPER_H
#define PXGADGETNAVIGATIONHELPER_H

@class NSTimer;
@protocol PXGadgetNavigationHelperDelegate;

#import <Foundation/Foundation.h>

#import "PXGadgetNavigationItem.h"

@interface PXGadgetNavigationHelper : NSObject

@property (weak, nonatomic) NSObject<PXGadgetNavigationHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hasPendingNavigation;
@property (weak, nonatomic) NSTimer *navigationInvalidationTimer; // ivar: _navigationInvalidationTimer
@property (retain, nonatomic) PXGadgetNavigationItem *pendingNavigationItem; // ivar: _pendingNavigationItem


-(BOOL)_navigateToGadget:(id)arg0 animated:(BOOL)arg1 navigationBlock:(id)arg2 ;
// -(BOOL)navigateToFirstGadgetMatchingCriteria:(id)arg0 animated:(unk)arg1 nestedNavigationBlock:(BOOL)arg2  ;
-(BOOL)navigateToFirstGadgetWithTypeDeferIfNeeded:(NSUInteger)arg0 animated:(BOOL)arg1 nestedNavigationBlock:(id)arg2 ;
-(BOOL)navigateToGadgetDeferIfNeeded:(id)arg0 animated:(BOOL)arg1 nestedNavigationBlock:(id)arg2 ;
-(BOOL)navigateToGadgetWithIdDeferIfNeeded:(id)arg0 animated:(BOOL)arg1 nestedNavigationBlock:(id)arg2 ;
-(void)_pendingNavigationInvalidationTimerFired:(id)arg0 ;
-(void)_stopPendingNavigationTimer;
-(void)invalidateAnyPendingNavigation;
-(void)navigateIfNeeded;
-(void)navigateToFeaturedPhotoWithSuggestionIdentifier:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)navigateToFirstGadgetAndFirstNestedGadget:(BOOL)arg0 ;
-(void)navigateToGadgetForCMMInvitationWithIdentifier:(id)arg0 ;
-(void)navigateToGadgetForCMMSuggestions;
-(void)navigateToGadgetInHorizontalGadget:(id)arg0 animated:(BOOL)arg1 ;
-(void)navigateToGadgetWithTypeSurveyCongratulationsWithGadgetType:(NSUInteger)arg0 ;
-(void)navigateToInvitationCMMWithUUID:(id)arg0 animated:(BOOL)arg1 ;
-(void)navigateToRevealTheMostRecentMemoryAnimated:(BOOL)arg0 ;
-(void)navigateToSectionWithGadgetType:(NSUInteger)arg0 andGadget:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigateToSharedAlbumInviteWithUUID:(id)arg0 animated:(BOOL)arg1 ;
-(void)navigateToSharedAlbumInvitesAnimated:(BOOL)arg0 ;
-(void)navigateToSuggestedCMMWithUUID:(id)arg0 animated:(BOOL)arg1 ;
-(void)startPendingNavigationTimer;


@end


#endif