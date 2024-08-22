// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI23TVREMOTEPARTICIPANTCELL_H
#define _TTC9SEYMOURUI23TVREMOTEPARTICIPANTCELL_H

@class TtC9SeymourUI29TVFocusableCollectionViewCell, UILabel;


#import "_TtC9SeymourUI15DeviceBadgeView.h"

@interface _TtC9SeymourUI23TVRemoteParticipantCell : TtC9SeymourUI29TVFocusableCollectionViewCell {
    ? layout;
    ? titleLabel;
    ? indicatorView;
    ? monogramButton;
    ? imageViewEdgeFillConstraints;
    ? type;
    ? deviceBadgeView;
}


@property (nonatomic, readonly) _TtC9SeymourUI15DeviceBadgeView *accessibilityDeviceBadgeView;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif