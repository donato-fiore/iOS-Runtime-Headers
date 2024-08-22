// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUFEEDTITLEVIEW_H
#define NUFEEDTITLEVIEW_H

@class UIView, NSString, NSMutableArray;
@protocol NUTitleViewDelegate, NUFeedTitleViewDelegate, NUTitleViewStyler;


#import "NUTitleViewUpdate.h"
#import "NUTitleView.h"

@interface NUFeedTitleView : UIView <NUTitleViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NUFeedTitleViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NUTitleViewUpdate *lastQueuedTitleViewUpdate; // ivar: _lastQueuedTitleViewUpdate
@property (retain, nonatomic) NSObject<NUTitleViewStyler> *styler;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NUTitleView *titleView; // ivar: _titleView
@property (readonly, nonatomic) NSMutableArray *titleViewUpdateStack; // ivar: _titleViewUpdateStack


-(BOOL)useCompactTitleViewUpdates;
-(NSUInteger)titleViewAnimationForAnimation:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)titleViewUpdateForFeedTitleViewUpdate:(id)arg0 force:(BOOL)arg1 ;
-(void)applyFeedTitleViewUpdate:(id)arg0 animation:(NSUInteger)arg1 ;
-(void)applyFeedTitleViewUpdate:(id)arg0 animation:(NSUInteger)arg1 force:(BOOL)arg2 ;
-(void)applyTitleViewUpdate:(id)arg0 animation:(NSUInteger)arg1 ;
-(void)layoutSubviews;
-(void)popApplyFeedTitleViewUpdateWithAnimation:(NSUInteger)arg0 ;
-(void)popApplyFeedTitleViewUpdateWithAnimation:(NSUInteger)arg0 force:(BOOL)arg1 ;
-(void)pushApplyFeedTitleViewUpdate:(id)arg0 animation:(NSUInteger)arg1 ;
-(void)pushApplyFeedTitleViewUpdate:(id)arg0 animation:(NSUInteger)arg1 force:(BOOL)arg2 ;
-(void)relayoutWithAnimation:(BOOL)arg0 ;
-(void)titleViewDidTapOnTitleView:(id)arg0 ;


@end


#endif