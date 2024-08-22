// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFNETWORKLISTCELL_H
#define WFNETWORKLISTCELL_H

@class UITableViewCell, NSString, UIImageView, UILabel, NSLayoutConstraint, UIStackView;
@protocol WFNetworkCell;


#import "WFAssociationStateView.h"
#import "WFHotspotDetails.h"

@interface WFNetworkListCell : UITableViewCell <WFNetworkCell>



@property (weak, nonatomic) WFAssociationStateView *associationStateView; // ivar: _associationStateView
@property (nonatomic) NSUInteger bars; // ivar: _bars
@property (nonatomic) BOOL connectionError; // ivar: _connectionError
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFHotspotDetails *hotspotDetails;
@property (weak, nonatomic) UIImageView *lockImageView; // ivar: _lockImageView
@property (weak, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (nonatomic) BOOL personalHotspot; // ivar: _personalHotspot
@property (nonatomic) BOOL secure; // ivar: _secure
@property (weak, nonatomic) UIImageView *signalImageView; // ivar: _signalImageView
@property (weak, nonatomic) NSLayoutConstraint *signalImageViewCenterConstraint; // ivar: _signalImageViewCenterConstraint
@property (weak, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (weak, nonatomic) NSLayoutConstraint *stackViewBottomConstraint; // ivar: _stackViewBottomConstraint
@property (weak, nonatomic) NSLayoutConstraint *stackViewTopConstraint; // ivar: _stackViewTopConstraint
@property (nonatomic) NSInteger state;
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (weak, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(CGFloat)_verticalPadding;
-(id)imageFromSignalBars:(NSUInteger)arg0 ;
-(void)_adjustStackViewPadding;
-(void)_updateSignalImage;
-(void)_updateTextColorForLabel:(id)arg0 ;
-(void)_updateTintColorForImageView:(id)arg0 ;
-(void)awakeFromNib;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif