// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKATTACHMENTVIEW_H
#define CKATTACHMENTVIEW_H

@class UIView, UILabel, NSString, UIImageView;
@protocol CKAttachmentView;


#import "CKMediaObject.h"

@interface CKAttachmentView : UIView <CKAttachmentView>



@property (retain, nonatomic) UILabel *actionLabel; // ivar: _actionLabel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (retain, nonatomic) CKMediaObject *mediaObject; // ivar: _mediaObject
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)action;
-(id)icon;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)subtitle;
-(id)title;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)configureIconImageView:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)setAction:(id)arg0 ;
-(void)setIcon:(id)arg0 ;
-(void)setSubtitle:(id)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif