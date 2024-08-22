// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUICARDSNIPPETHEADERVIEW_H
#define SIRIUICARDSNIPPETHEADERVIEW_H



#import "SiriUIReusableHeaderView.h"
#import "SiriUIContentLabel.h"

@interface SiriUICardSnippetHeaderView : SiriUIReusableHeaderView {
    SiriUIContentLabel *_titleLabel;
}




+(CGFloat)defaultHeight;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_edgeInsets;
-(void)configureWithTitle:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif