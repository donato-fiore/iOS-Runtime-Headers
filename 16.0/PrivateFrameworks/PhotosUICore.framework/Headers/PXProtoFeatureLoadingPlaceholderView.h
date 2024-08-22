// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPROTOFEATURELOADINGPLACEHOLDERVIEW_H
#define PXPROTOFEATURELOADINGPLACEHOLDERVIEW_H

@class UIActivityIndicatorView, UILabel;


#import "PXProtoFeaturePlaceholderView.h"

@interface PXProtoFeatureLoadingPlaceholderView : PXProtoFeaturePlaceholderView {
    UIActivityIndicatorView *_spinner;
    UILabel *_label;
}




-(BOOL)wantsContentView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateLabelText;
-(void)layoutSubviews;
-(void)statusDescriptionDidChange;


@end


#endif