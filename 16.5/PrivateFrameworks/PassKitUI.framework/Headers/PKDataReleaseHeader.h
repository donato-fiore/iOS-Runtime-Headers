// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDATARELEASEHEADER_H
#define PKDATARELEASEHEADER_H

@class UIView, UILabel, UIButton, UIImageView;
@protocol PKDataReleaseHeaderDelegate;



@interface PKDataReleaseHeader : UIView {
    id<PKDataReleaseHeaderDelegate> *_delegate;
    UILabel *_label;
    UIButton *_dismissButton;
    UIImageView *_logo;
}




-(id)initWithDelegate:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dismiss;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif