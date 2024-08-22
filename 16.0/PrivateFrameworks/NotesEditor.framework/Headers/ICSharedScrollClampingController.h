// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSHAREDSCROLLCLAMPINGCONTROLLER_H
#define ICSHAREDSCROLLCLAMPINGCONTROLLER_H


#import <Foundation/Foundation.h>

#import "ICTextView.h"

@interface ICSharedScrollClampingController : NSObject

@property (readonly) NSInteger scrollClampingStack; // ivar: _scrollClampingStack
@property CGFloat scrollClampingTopOffsetFactor; // ivar: _scrollClampingTopOffsetFactor
@property (nonatomic) CGFloat scrollClampingTopOffsetLineFragmentHeight; // ivar: _scrollClampingTopOffsetLineFragmentHeight
@property NSInteger scrollClampingTopTextIndex; // ivar: _scrollClampingTopTextIndex
@property (readonly, nonatomic) CGFloat scrollClampingTurnOffDelay; // ivar: _scrollClampingTurnOffDelay
@property (readonly, weak, nonatomic) ICTextView *textView; // ivar: _textView
@property NSInteger userInitiatedSaveCount; // ivar: _userInitiatedSaveCount


-(BOOL)isClamped;
-(BOOL)notificationObjectMatchesTextViewNote:(id)arg0 ;
-(id)clampedYValue;
-(id)initWithTextView:(id)arg0 listensToMergeNotifications:(BOOL)arg1 ;
-(id)initWithTextView:(id)arg0 listensToMergeNotifications:(BOOL)arg1 clampingTurnOffDelay:(CGFloat)arg2 ;
-(void)clamp;
-(void)contextDidSaveUserInitiatedChange:(id)arg0 ;
-(void)contextWillSaveUserInitiatedChange:(id)arg0 ;
-(void)dealloc;
-(void)mergeRelatedOperationsDidEnd:(id)arg0 ;
-(void)mergeRelatedOperationsWillBegin:(id)arg0 ;
-(void)textStorageWillEndEditingNotification:(id)arg0 ;
-(void)topTextIndex:(*NSUInteger)arg0 topTextOffset:(*CGFloat)arg1 topTextFragmentHeight:(*CGFloat)arg2 ;
-(void)unclamp;
-(void)unclampWithMergeUpdates:(BOOL)arg0 ;


@end


#endif