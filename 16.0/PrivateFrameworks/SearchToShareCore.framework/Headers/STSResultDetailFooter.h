// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSRESULTDETAILFOOTER_H
#define STSRESULTDETAILFOOTER_H

@class UIView, UIImageView, NSMutableArray, UIButton, UIImage;



@interface STSResultDetailFooter : UIView {
    UIImageView *_providerIconView;
    NSMutableArray *_constraints;
}


@property (readonly, nonatomic) UIButton *providerButton; // ivar: _providerButton
@property (retain, nonatomic) UIImage *providerIcon;
@property (nonatomic) CGSize providerIconSize; // ivar: _providerIconSize
@property (readonly, nonatomic) UIButton *sendButton; // ivar: _sendButton


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateConstraints;


@end


#endif