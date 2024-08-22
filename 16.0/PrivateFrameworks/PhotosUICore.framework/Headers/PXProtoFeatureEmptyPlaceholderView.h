// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPROTOFEATUREEMPTYPLACEHOLDERVIEW_H
#define PXPROTOFEATUREEMPTYPLACEHOLDERVIEW_H

@class UILabel;


#import "PXProtoFeaturePlaceholderView.h"

@interface PXProtoFeatureEmptyPlaceholderView : PXProtoFeaturePlaceholderView {
    UILabel *_label;
}




-(BOOL)wantsContentView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateLabelText;
-(void)statusDescriptionDidChange;


@end


#endif