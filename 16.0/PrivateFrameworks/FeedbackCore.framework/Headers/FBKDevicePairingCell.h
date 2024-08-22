// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKDEVICEPAIRINGCELL_H
#define FBKDEVICEPAIRINGCELL_H

@class UITableViewCell, UIActivityIndicatorView, UILabel, NSLayoutConstraint, UIImageView;



@interface FBKDevicePairingCell : UITableViewCell

@property (weak, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (weak, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (weak, nonatomic) NSLayoutConstraint *detailLabelTrailingConstraint; // ivar: _detailLabelTrailingConstraint
@property (nonatomic) CGFloat detailLabelTrailingConstraintInitial; // ivar: _detailLabelTrailingConstraintInitial
@property (weak, nonatomic) UIImageView *deviceImage; // ivar: _deviceImage
@property (weak, nonatomic) UILabel *mainLabel; // ivar: _mainLabel
@property (weak, nonatomic) UIImageView *statusIndicatorImageView; // ivar: _statusIndicatorImageView
@property (weak, nonatomic) UILabel *subLabel; // ivar: _subLabel


+(CGFloat)estimatedRowHeight;
-(CGFloat)spaceFromSuperViewToLabel;
-(void)awakeFromNib;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateWithDevice:(id)arg0 showsDetail:(BOOL)arg1 showsTransport:(BOOL)arg2 ;
-(void)updateWithDevice:(id)arg0 showsDetail:(BOOL)arg1 showsTransport:(BOOL)arg2 isSelected:(BOOL)arg3 ;


@end


#endif