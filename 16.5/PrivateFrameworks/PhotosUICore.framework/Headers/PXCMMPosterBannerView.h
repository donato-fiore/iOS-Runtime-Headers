// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMPOSTERBANNERVIEW_H
#define PXCMMPOSTERBANNERVIEW_H

@class UIView, NSString, UILabel, UIVisualEffectView, NSArray;


#import "PXCapsuleButton.h"
#import "PXUpdater.h"

@interface PXCMMPosterBannerView : UIView {
    _NSRange _headlineBoldRange;
    PXCapsuleButton *_actionButton;
    NSString *_actionButtonTitle;
    id *_actionButtonAction;
    UILabel *_headlineLabel;
    UILabel *_subheadlineLabel;
    UIVisualEffectView *_visualEffectView;
    PXUpdater *_updater;
}


@property (nonatomic, getter=isAddingPhotos) BOOL addingPhotos; // ivar: _addingPhotos
@property (nonatomic) BOOL containsUnverifiedPersons; // ivar: _containsUnverifiedPersons
@property (copy, nonatomic) NSString *headline; // ivar: _headline
@property (nonatomic, getter=isLoadingPeopleSuggestions) BOOL loadingPeopleSuggestions; // ivar: _loadingPeopleSuggestions
@property (copy, nonatomic) NSArray *localizedNamesForHeadline; // ivar: _localizedNamesForHeadline
@property (copy, nonatomic) NSString *subheadline; // ivar: _subheadline


-(id)_actionButtonWithTitle:(id)arg0 action:(SEL)arg1 enabled:(BOOL)arg2 ;
-(id)_attributedStringWithString:(id)arg0 boldRange:(struct _NSRange )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_performLayoutInWidth:(CGFloat)arg0 updateSubviewFrames:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_actionButtonTapped:(id)arg0 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_updateActionButton;
-(void)_updateLoadingPeopleSuggestions;
-(void)_updateTitles;
-(void)layoutSubviews;
-(void)setActionButtonWithTitle:(id)arg0 actionBlock:(id)arg1 ;
-(void)tintColorDidChange;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif