// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOSMILESCOMMENTCELL_H
#define PUPHOTOSMILESCOMMENTCELL_H

@class UITableViewCell, UILabel, UIView, NSOrderedSet;



@interface PUPhotoSmilesCommentCell : UITableViewCell

@property (nonatomic) BOOL isVideo; // ivar: _isVideo
@property (readonly, retain, nonatomic) UILabel *smileContentLabel; // ivar: _smileContentLabel
@property (readonly, retain, nonatomic) UIView *styledSeparatorView; // ivar: _styledSeparatorView
@property (copy, nonatomic) NSOrderedSet *userLikes; // ivar: _userLikes
@property (nonatomic) BOOL usesCompactSeparators; // ivar: _usesCompactSeparators


+(CGFloat)heightOfSmileCellWithComments:(id)arg0 forWidth:(CGFloat)arg1 isVideo:(BOOL)arg2 forInterfaceOrientation:(NSInteger)arg3 ;
+(id)_attributedStringForComments:(id)arg0 color:(id)arg1 isVideo:(BOOL)arg2 ;
+(id)_smileStringForComments:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateContent;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif