// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDISCOVERYCALLTOACTIONFOOTERVIEW_H
#define PKDISCOVERYCALLTOACTIONFOOTERVIEW_H

@class UIView, PKDiscoveryCallToAction, PKDiscoveryMedia, UIImageView, UILabel, NSString;
@protocol PKLinkedApplicationObserver, PKDiscoveryCardViewDelegate;


#import "PKContinuousButton.h"
#import "PKLinkedApplication.h"

@interface PKDiscoveryCallToActionFooterView : UIView <PKLinkedApplicationObserver>

 {
    PKDiscoveryCallToAction *_callToAction;
    PKDiscoveryMedia *_media;
    UIImageView *_iconImageView;
    PKContinuousButton *_button;
    UILabel *_titleLabel;
    UILabel *_editorialDescriptionLabel;
    UILabel *_expandedTitleLabel;
    UILabel *_expandedEditorialDescriptionLabel;
    BOOL _hasIcon;
    BOOL _hasButton;
    BOOL _useAccessibilityLayout;
    PKLinkedApplication *_linkedApplication;
    id *_callToActionTappedOverride;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKDiscoveryCardViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger displayType; // ivar: _displayType
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (nonatomic) BOOL showActivityIndicator; // ivar: _showActivityIndicator
@property (readonly) Class superclass;


-(CGFloat)_buttonWidthForLabelWidth:(CGFloat)arg0 ;
-(id)_descriptionLabelWithLocalizedDescription:(id)arg0 ;
-(id)_editorialDescriptionLabelFont;
-(id)_titleLabelColor;
-(id)_titleLabelFont;
-(id)_titleLabelWithLocalizedTitle:(id)arg0 ;
-(id)initWithCallToAction:(id)arg0 displayType:(NSInteger)arg1 ;
-(id)initWithCallToAction:(id)arg0 displayType:(NSInteger)arg1 itemIdentifier:(id)arg2 ;
-(struct CGSize )_buttonSizeForBounds:(struct CGRect )arg0 ;
-(struct CGSize )_iconSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buttonPressed:(id)arg0 ;
-(void)_loadImageData;
-(void)layoutSubviews;
-(void)linkedApplicationDidChangeState:(id)arg0 ;
-(void)setCallToActionTappedOverride:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif