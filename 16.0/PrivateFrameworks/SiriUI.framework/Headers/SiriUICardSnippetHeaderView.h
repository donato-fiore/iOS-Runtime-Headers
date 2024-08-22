// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUICARDSNIPPETHEADERVIEW_H
#define SIRIUICARDSNIPPETHEADERVIEW_H

@class SiriSharedUIContentLabel;


#import "SiriUIReusableHeaderView.h"

@interface SiriUICardSnippetHeaderView : SiriUIReusableHeaderView {
    SiriSharedUIContentLabel *_titleLabel;
}




+(CGFloat)defaultHeight;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_edgeInsets;
-(void)configureWithTitle:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif