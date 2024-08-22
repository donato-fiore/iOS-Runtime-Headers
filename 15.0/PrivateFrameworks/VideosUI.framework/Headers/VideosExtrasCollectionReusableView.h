// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOSEXTRASCOLLECTIONREUSABLEVIEW_H
#define VIDEOSEXTRASCOLLECTIONREUSABLEVIEW_H

@class UICollectionReusableView, UILabel, MPUContentSizeLayoutConstraint, NSLayoutConstraint, UIView, NSArray;



@interface VideosExtrasCollectionReusableView : UICollectionReusableView {
    UILabel *_textLabel;
    MPUContentSizeLayoutConstraint *_textTopConstraint;
    NSLayoutConstraint *_textLeftConstraint;
    MPUContentSizeLayoutConstraint *_textBottomConstraint;
    NSLayoutConstraint *_textRightConstraint;
    UIEdgeInsets _labelInsets;
    UIView *_borderView;
    NSArray *_borderConstraints;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureConstraintsForInsets:(struct UIEdgeInsets )arg0 ;
-(void)configureForHeaderElement:(id)arg0 headerStyle:(id)arg1 ;


@end


#endif