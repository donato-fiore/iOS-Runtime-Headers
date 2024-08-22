// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMOMENTSHARESTATUSBALLOONVIEW_H
#define CKMOMENTSHARESTATUSBALLOONVIEW_H

@class UIImageView, UILabel;


#import "CKColoredBalloonView.h"

@interface CKMomentShareStatusBalloonView : CKColoredBalloonView {
    UIImageView *_iconImageView;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
}




+(id)_secondaryLabelString;
+(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(char)color;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_performLayoutInSize:(struct CGSize )arg0 updateSubviewFrames:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif