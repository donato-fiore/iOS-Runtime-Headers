// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKEXPRESSBANNERLABELVIEW_H
#define PKEXPRESSBANNERLABELVIEW_H

@class UIView, NSString, UILabel, NSMutableArray;
@protocol PKExpressBannerLabelViewDelegate;



@interface PKExpressBannerLabelView : UIView {
    unsigned int _alignmentEdge;
    NSString *_text;
    CGSize _size;
    UILabel *_label;
    NSMutableArray *_obsoleteLabels;
    id<PKExpressBannerLabelViewDelegate> *_delegate;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif