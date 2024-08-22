// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKDEVICEDISPLAYCELL_H
#define FBKDEVICEDISPLAYCELL_H

@class UITableViewCell, NSString, UIImageView, UILabel;
@protocol FBKDiffableCell;



@interface FBKDeviceDisplayCell : UITableViewCell <FBKDiffableCell>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UIImageView *deviceIcon; // ivar: _deviceIcon
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *itemIdentifier; // ivar: itemIdentifier
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *typeLabel; // ivar: _typeLabel


+(id)reuseIdentifier;
-(CGFloat)spaceFromSuperViewToLabel;
-(void)awakeFromNib;
-(void)configureSelected:(BOOL)arg0 ;
-(void)didTapConnectionButton:(id)arg0 ;
-(void)layoutSubviews;
-(void)setConnected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateNumberOfLines;
-(void)updateWithDevice:(id)arg0 ;


@end


#endif