// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPCOLLABORATIONFOOTERVIEW_H
#define LPCOLLABORATIONFOOTERVIEW_H

@class UIImageView, UIView;


#import "LPComponentView.h"
#import "LPTextView.h"
#import "LPCollaborationFooterConfiguration.h"
#import "LPCollaborationFooterStyle.h"

@interface LPCollaborationFooterView : LPComponentView {
    LPTextView *_optionsView;
    LPTextView *_handleView;
    UIImageView *_indicatorView;
    UIView *_separatorView;
    LPCollaborationFooterConfiguration *_configuration;
    LPCollaborationFooterStyle *_style;
}




-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 configuration:(id)arg1 style:(id)arg2 ;
-(struct CGSize )_layoutFooterForSize:(struct CGSize )arg0 applyingLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_footerTapRecognized:(id)arg0 ;
-(void)layoutComponentView;
-(void)updateIndicator;


@end


#endif