// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UINAVIGATIONBARLARGETITLEVIEW_H
#define _UINAVIGATIONBARLARGETITLEVIEW_H

@class NSArray, NSString, NSDictionary;
@protocol UIPointerInteractionDelegate, _UINavigationBarTransitionContextParticipant;


#import "UIView.h"
#import "_UINavigationBarTransitionContext.h"
#import "_UIPointerInteractionAssistant.h"
#import "_UINavigationBarLargeTitleViewLayout.h"

@interface _UINavigationBarLargeTitleView : UIView <UIPointerInteractionDelegate, _UINavigationBarTransitionContextParticipant>

 {
    _UINavigationBarTransitionContext *_transitionContext;
    NSArray *_titleCandidates;
    NSString *__effectiveTitle;
}


@property (readonly, nonatomic) UIView *accessibilityTitleView;
@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (nonatomic) NSUInteger accessoryViewHorizontalAlignment; // ivar: _accessoryViewHorizontalAlignment
@property (nonatomic) BOOL alignAccessoryViewToTitleBaseline; // ivar: _alignAccessoryViewToTitleBaseline
@property (retain, nonatomic) NSArray *alternateTitles; // ivar: _alternateTitles
@property (weak, nonatomic) _UIPointerInteractionAssistant *assistant; // ivar: _assistant
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *effectiveTitleAttributes; // ivar: _effectiveTitleAttributes
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UINavigationBarLargeTitleViewLayout *layout; // ivar: _layout
@property (nonatomic) BOOL providesExtraSpaceForExcessiveLineHeights; // ivar: _providesExtraSpaceForExcessiveLineHeights
@property (readonly, nonatomic) CGFloat restingHeightOfTitleView;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSDictionary *titleAttributes; // ivar: _titleAttributes
@property (nonatomic) NSInteger titleType; // ivar: _titleType
@property (nonatomic) NSUInteger twoLineMode; // ivar: _twoLineMode


-(id)_effectiveTitle;
-(id)_newLayout;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 titleType:(NSInteger)arg1 ;
-(void)_clearAssistants;
-(void)_updateContentAndInvalidate:(BOOL)arg0 ;
-(void)adoptLayout:(id)arg0 ;
-(void)adoptNewLayout;
-(void)clearTransitionContext;
-(void)ensureBackButtonTruncationOccursWithContext:(id)arg0 ;
-(void)finalizeStateFromTransition:(id)arg0 ;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)prepareToRecordToState:(id)arg0 ;
-(void)recordFromStateForTransition:(id)arg0 ;
-(void)recordToStateForTransition:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContent;


@end


#endif