// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOCOMMENTCELL_H
#define PUPHOTOCOMMENTCELL_H

@class UITableViewCell, PLCloudSharedComment, UILabel, UITextView, UIView;



@interface PUPhotoCommentCell : UITableViewCell

@property (copy, nonatomic) PLCloudSharedComment *comment; // ivar: _comment
@property (readonly, retain, nonatomic) UILabel *commentBylineLabel; // ivar: _commentBylineLabel
@property (readonly, retain, nonatomic) UITextView *commentContentTextView; // ivar: _commentContentTextView
@property (readonly, retain, nonatomic) UIView *styledSeparatorView; // ivar: _styledSeparatorView
@property (nonatomic) BOOL usesCompactSeparators; // ivar: _usesCompactSeparators


+(CGFloat)heightForComment:(id)arg0 forWidth:(CGFloat)arg1 forInterfaceOrientation:(NSInteger)arg2 ;
+(Class)layerClass;
+(id)_attributionStringForComment:(id)arg0 ;
+(id)_commentStringForComment:(id)arg0 ;
+(id)_synthesizedAttributedString:(id)arg0 withWordWrapping:(BOOL)arg1 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateContent;
-(void)delete:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif