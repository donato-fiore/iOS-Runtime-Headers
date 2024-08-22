// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPROPERTYSIMPLETRANSPORTCELL_H
#define CNPROPERTYSIMPLETRANSPORTCELL_H

@class UIImageView, UIColor, UIView;


#import "CNPropertySimpleCell.h"
#import "CNTransportButton.h"

@interface CNPropertySimpleTransportCell : CNPropertySimpleCell {
    CNTransportButton *_transportIcon1;
    CNTransportButton *_transportIcon2;
    CNTransportButton *_transportIcon3;
    UIImageView *_starView;
}


@property (retain, nonatomic) UIColor *actionsColor; // ivar: _actionsColor
@property (nonatomic) BOOL allowsActions; // ivar: _allowsActions
@property (retain, nonatomic) UIView *badgeView; // ivar: _badgeView
@property (nonatomic) BOOL needsUpdateTouchAreas; // ivar: _needsUpdateTouchAreas
@property (nonatomic) BOOL shouldShowBadge; // ivar: _shouldShowBadge
@property (readonly, nonatomic) BOOL shouldShowStar;
@property (nonatomic) BOOL shouldShowTransportButtons; // ivar: _shouldShowTransportButtons
@property (readonly, nonatomic) UIView *standardBadgeView;
@property (readonly, nonatomic) UIImageView *standardStarView; // ivar: _standardStarView
@property (readonly, nonatomic) CNTransportButton *standardTransportIcon;
@property (readonly, nonatomic) CNTransportButton *transportIcon1;
@property (readonly, nonatomic) CNTransportButton *transportIcon2;
@property (readonly, nonatomic) CNTransportButton *transportIcon3;


+(void)_updateStarImageForView:(id)arg0 ;
-(BOOL)shouldPerformDefaultAction;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)rightMostView;
-(id)variableConstraints;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)prepareForReuse;
-(void)setCardGroupItem:(id)arg0 ;
-(void)transportButtonClicked:(id)arg0 ;
-(void)updateLabelNeedingHuggingContent;
-(void)updateStarIcon;
-(void)updateTransportButtons;
-(void)updateWithPropertyItem:(id)arg0 ;


@end


#endif