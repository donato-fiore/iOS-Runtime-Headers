// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKCMRCHIGHLIGHTVIEW_H
#define VKCMRCHIGHLIGHTVIEW_H

@class UILabel, NSLayoutConstraint;
@protocol VKCMRCHighlightViewDelegate;


#import "VKPlatformView.h"
#import "VKCMRCDataDetectorElement.h"

@interface VKCMRCHighlightView : VKPlatformView

@property (retain, nonatomic) VKPlatformView *containerView; // ivar: _containerView
@property (weak, nonatomic) NSObject<VKCMRCHighlightViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) VKCMRCDataDetectorElement *element; // ivar: _element
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) NSLayoutConstraint *pillCenterConstraint; // ivar: _pillCenterConstraint
@property (retain, nonatomic) NSLayoutConstraint *pillTopConstraint; // ivar: _pillTopConstraint
@property (retain, nonatomic) VKPlatformView *pillView; // ivar: _pillView
@property (retain, nonatomic) NSLayoutConstraint *pillWidthConstraint; // ivar: _pillWidthConstraint


-(id)attributedStringForHeight:(CGFloat)arg0 ;
-(id)initWithElement:(id)arg0 delegate:(id)arg1 ;
-(void)createPillViewIfNecessary;
-(void)layoutSubviews;


@end


#endif