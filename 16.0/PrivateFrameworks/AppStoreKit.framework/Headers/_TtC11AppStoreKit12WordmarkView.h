// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11APPSTOREKIT12WORDMARKVIEW_H
#define _TTC11APPSTOREKIT12WORDMARKVIEW_H

@class UIView;



@interface _TtC11AppStoreKit12WordmarkView : UIView {
    ? imageView;
    ? referenceLineHeight;
    ? alignment;
}


@property (nonatomic, readonly) BOOL hasContent;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif