// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC27APPLEMEDIASERVICESUIDYNAMIC12DYNAMICLABEL_H
#define _TTC27APPLEMEDIASERVICESUIDYNAMIC12DYNAMICLABEL_H

@class AMSUICommonView, NSString;



@interface _TtC27AppleMediaServicesUIDynamic12DynamicLabel : AMSUICommonView {
    ? defaultAlignment;
    ? defaultColor;
    ? defaultFont;
    ? dynamicText;
    ? shrinkToFit;
    ? didShrinkForLineCount;
    ? label;
    ? objectGraph;
}


@property (nonatomic, readonly) CGSize intrinsicContentSize;
@property (nonatomic, copy) NSString *maximumContentSizeCategory;


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