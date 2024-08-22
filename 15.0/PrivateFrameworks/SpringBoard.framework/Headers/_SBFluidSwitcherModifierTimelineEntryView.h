// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBFLUIDSWITCHERMODIFIERTIMELINEENTRYVIEW_H
#define _SBFLUIDSWITCHERMODIFIERTIMELINEENTRYVIEW_H

@class UIView, UILabel, UITapGestureRecognizer;
@protocol _SBFluidSwitcherModifierTimelineEntryViewDelegate;


#import "SBSwitcherModifierTimelineEntry.h"

@interface _SBFluidSwitcherModifierTimelineEntryView : UIView {
    UILabel *_nameLabel;
    UILabel *_postStackLabel;
    UILabel *_actionsLabel;
    UITapGestureRecognizer *_tapRecognizer;
}


@property (weak, nonatomic) NSObject<_SBFluidSwitcherModifierTimelineEntryViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) SBSwitcherModifierTimelineEntry *entry; // ivar: _entry


-(CGFloat)_randomFloatFromSeed:(NSUInteger)arg0 min:(CGFloat)arg1 max:(CGFloat)arg2 ;
-(id)_appendRecursiveDescriptionToString:(id)arg0 level:(NSUInteger)arg1 snapshot:(id)arg2 ;
-(id)_attributedStringsForStack:(id)arg0 ;
-(id)_randomColorWithSeed:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 entry:(id)arg1 ;
-(void)_tap:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif