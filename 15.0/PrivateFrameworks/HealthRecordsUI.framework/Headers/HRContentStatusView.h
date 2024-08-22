// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRCONTENTSTATUSVIEW_H
#define HRCONTENTSTATUSVIEW_H

@class UIView, NSString;



@interface HRContentStatusView : UIView {
    ? titleLabel;
    ? subtitleLabel;
    ? spinnerView;
    ? title;
    ? subtitle;
}


@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 ;
-(void)layoutSubviews;
-(void)startAnimating;
-(void)stopAnimating;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif