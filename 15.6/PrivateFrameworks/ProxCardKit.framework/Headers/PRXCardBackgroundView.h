// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRXCARDBACKGROUNDVIEW_H
#define PRXCARDBACKGROUNDVIEW_H

@class UIView;



@interface PRXCardBackgroundView : UIView {
    NSDirectionalEdgeInsets _containerLayoutMargins;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 containerLayoutMargins:(struct NSDirectionalEdgeInsets )arg1 ;
-(void)_updateCornerRadius;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif