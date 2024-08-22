// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCOMPACTTITLEDPLATTERVIEW_H
#define WFCOMPACTTITLEDPLATTERVIEW_H

@class PLTitledPlatterView;
@protocol WFCompactTitledPlatterViewDelegate;



@interface WFCompactTitledPlatterView : PLTitledPlatterView

@property (weak, nonatomic) NSObject<WFCompactTitledPlatterViewDelegate> *delegate; // ivar: _delegate


-(struct CGSize )sizeThatFitsContentWithSize:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif