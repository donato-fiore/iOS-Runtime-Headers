// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOOWNERCOMMENTCELL_H
#define PUPHOTOOWNERCOMMENTCELL_H

@class UITableViewCell, UILabel, NSAttributedString, UIView;



@interface PUPhotoOwnerCommentCell : UITableViewCell

@property (readonly, retain, nonatomic) UILabel *ownerContentLabel; // ivar: _ownerContentLabel
@property (copy, nonatomic) NSAttributedString *ownerString; // ivar: _ownerString
@property (readonly, retain, nonatomic) UIView *styledSeparatorView; // ivar: _styledSeparatorView
@property (nonatomic) BOOL usesCompactSeparators; // ivar: _usesCompactSeparators


+(CGFloat)heightOfOwnerCellWithAsset:(id)arg0 forWidth:(CGFloat)arg1 forInterfaceOrientation:(NSInteger)arg2 ;
+(id)_ownerStringForAsset:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)updateContentFromAsset:(id)arg0 ;


@end


#endif