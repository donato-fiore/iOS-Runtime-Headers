// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAUTOCOMPLETESUGGESTIONSCELL_H
#define CNAUTOCOMPLETESUGGESTIONSCELL_H

@class UICollectionViewCell, UIImageView, NSString, UIImage, UILabel;



@interface CNAutocompleteSuggestionsCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) NSString *displayString;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel


+(id)cellIdentifier;
-(BOOL)useAccessibleLayout;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setupConstraints;


@end


#endif