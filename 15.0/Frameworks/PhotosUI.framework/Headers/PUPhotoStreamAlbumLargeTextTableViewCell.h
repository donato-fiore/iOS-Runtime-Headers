// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOSTREAMALBUMLARGETEXTTABLEVIEWCELL_H
#define PUPHOTOSTREAMALBUMLARGETEXTTABLEVIEWCELL_H

@class UIImageView, NSArray, UILabel;


#import "PUPhotoStreamAlbumTableViewCell.h"

@interface PUPhotoStreamAlbumLargeTextTableViewCell : PUPhotoStreamAlbumTableViewCell

@property (retain, nonatomic) UIImageView *albumImageView; // ivar: _albumImageView
@property (retain, nonatomic) NSArray *currentConstraints; // ivar: _currentConstraints
@property (retain, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)detailText;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)text;
-(void)_commonPhotoStreamAlbumLargeTextTableViewCellInit;
-(void)didMoveToWindow;
-(void)setDetailText:(id)arg0 ;
-(void)setText:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif