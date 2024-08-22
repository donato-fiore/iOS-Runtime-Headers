// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDASHBOARDMESSAGECELL_H
#define PKDASHBOARDMESSAGECELL_H

@class UITableViewCell, UIImageView, UIButton, UIImage, UILabel, NSString;



@interface PKDashboardMessageCell : UITableViewCell {
    UIImageView *_iconImageView;
    UIButton *_dismissButton;
    BOOL _isTemplateLayout;
}


@property (copy, nonatomic) id *actionOnDismiss; // ivar: _actionOnDismiss
@property (retain, nonatomic) UIImage *dismissImage; // ivar: _dismissImage
@property (retain, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (readonly, nonatomic) UILabel *labelMessage; // ivar: _labelMessage
@property (readonly, nonatomic) UILabel *labelTitle; // ivar: _labelTitle
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) BOOL smallDevice; // ivar: _smallDevice
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dismissButtonPressed:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif