// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPROTOTEXTUALFEATUREVIEW_H
#define PXPROTOTEXTUALFEATUREVIEW_H

@class UILabel;


#import "PXProtoFeatureView.h"

@interface PXProtoTextualFeatureView : PXProtoFeatureView {
    UILabel *_label;
}




-(struct CGSize )compactContentSize;
-(struct CGSize )regularContentSize;
-(struct UIEdgeInsets )minimumMargins;
-(void)layoutSubviews;
-(void)updateContent;


@end


#endif