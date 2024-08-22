// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXUIWIDGETFOOTERVIEW_H
#define PXUIWIDGETFOOTERVIEW_H

@class UIView, NSArray, UIButton, UIFocusGuide, NSString, UIFont;
@protocol PXUIWidgetFooterViewDelegate;



@interface PXUIWidgetFooterView : UIView {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    ? _needsUpdateFlags;
    ? _delegateRespondsTo;
}


@property (copy, nonatomic, setter=_setConstraints:) NSArray *_constraints; // ivar: __constraints
@property (readonly, nonatomic) UIButton *_disclosureButton; // ivar: __disclosureButton
@property (readonly, nonatomic) UIFocusGuide *_focusGuide; // ivar: __focusGuide
@property (nonatomic, setter=_setHasContent:) BOOL _hasContent; // ivar: __hasContent
@property (readonly, nonatomic) UIView *_leadingSeparator; // ivar: __leadingSeparator
@property (readonly, nonatomic) UIView *_trailingSeparator; // ivar: __trailingSeparator
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (weak, nonatomic) NSObject<PXUIWidgetFooterViewDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *disclosureTitle; // ivar: _disclosureTitle
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle


-(BOOL)_needsUpdate;
-(id)_disclosureButtonCreateIfNeeded:(BOOL)arg0 ;
-(id)_focusGuideCreateIfNeeded:(BOOL)arg0 ;
-(id)_leadingSeparatorCreateIfNeeded:(BOOL)arg0 ;
-(id)_trailingSeparatorCreateIfNeeded:(BOOL)arg0 ;
-(void)_handleDisclosureButton:(id)arg0 ;
-(void)_invalidateDisclosure;
-(void)_invalidateFocusGuide;
-(void)_invalidateHasContent;
-(void)_invalidateSeparators;
-(void)_setNeedsUpdate;
-(void)_updateDisclosureIfNeeded;
-(void)_updateFocusGuideIfNeeded;
-(void)_updateHasContentIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateSeparatorsIfNeeded;
-(void)performChanges:(id)arg0 ;
-(void)tintColorDidChange;
-(void)updateConstraints;


@end


#endif