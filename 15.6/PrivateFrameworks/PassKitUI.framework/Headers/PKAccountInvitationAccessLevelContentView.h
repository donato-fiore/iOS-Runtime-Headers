// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTINVITATIONACCESSLEVELCONTENTVIEW_H
#define PKACCOUNTINVITATIONACCESSLEVELCONTENTVIEW_H

@class UIView, NSString, UIImageView, UILabel;
@protocol UIContentView, UIContentConfiguration;



@interface PKAccountInvitationAccessLevelContentView : UIView <UIContentView>

 {
    BOOL _isTemplateLayout;
}


@property (copy, nonatomic) NSObject<UIContentConfiguration> *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) UILabel *secondarySubtitleLabel; // ivar: _secondarySubtitleLabel
@property (readonly, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyConfiguration:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif