// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNOTEMERGEABILITYCONTROLLER_H
#define ICNOTEMERGEABILITYCONTROLLER_H

@class NSString, ICNote, NSTimer;
@protocol ICNoteMergeabilityDelegate;

#import <Foundation/Foundation.h>


@interface ICNoteMergeabilityController : NSObject <ICNoteMergeabilityDelegate>



@property (nonatomic) BOOL attemptedToMergeWhenEditingMarkedText; // ivar: _attemptedToMergeWhenEditingMarkedText
@property NSInteger blockingMergeStack; // ivar: _blockingMergeStack
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasBlockedMergeRequest; // ivar: _hasBlockedMergeRequest
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ICNote *note; // ivar: _note
@property (nonatomic) BOOL shouldBypassDidUnmarkTextCallback; // ivar: _shouldBypassDidUnmarkTextCallback
@property (nonatomic) BOOL shouldUseLongDelayWhenSchedulingUnmarkTextTimer; // ivar: _shouldUseLongDelayWhenSchedulingUnmarkTextTimer
@property (readonly) Class superclass;
@property (retain, nonatomic) NSTimer *unmarkTextTimer; // ivar: _unmarkTextTimer


-(BOOL)mergeIsBlocked;
-(id)initWithNote:(id)arg0 ;
-(id)textStorage;
-(struct _NSRange )markedTextRange;
-(void)addNotificationCenterObservers;
-(void)dealloc;
-(void)performBlockToMergeNoteData:(id)arg0 ;
-(void)performMerge;
-(void)performPreviouslyBlockedMergeIfNecessary;
-(void)removeNotificationCenterObservers;
-(void)requestMerge;
-(void)requestMergeNotePrimitiveData;
-(void)startBlockingMerge;
-(void)startUnmarkTextTimerIfNeeded;
-(void)stopBlockingMerge;
-(void)stopUnmarkTextTimerIfNeeded;
-(void)textStorageDidEndEditingNotification:(id)arg0 ;
-(void)textViewDidEndSelectionChange:(id)arg0 ;
-(void)textViewDidMarkText:(id)arg0 ;
-(void)textViewDidUnmarkText:(id)arg0 ;
-(void)textViewWillStartSelectionChange:(id)arg0 ;
-(void)unmarkTextIfNecessary;
-(void)userExpandedOrClosedKeyboardCandidateCollectionView:(id)arg0 ;


@end


#endif