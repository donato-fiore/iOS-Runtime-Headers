// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC27APPLEMEDIASERVICESUIDYNAMIC12DYNAMICLABEL_H
#define _TTC27APPLEMEDIASERVICESUIDYNAMIC12DYNAMICLABEL_H

@class AMSUICommonView;



@interface _TtC27AppleMediaServicesUIDynamic12DynamicLabel : AMSUICommonView {
    ? defaultAlignment;
    ? defaultColor;
    ? defaultFont;
    ? shrinkToFit;
    ? dynamicText;
    ? label;
    ? objectGraph;
}


@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)invalidateIntrinsicContentSize;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif