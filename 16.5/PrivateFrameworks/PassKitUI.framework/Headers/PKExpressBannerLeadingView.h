// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKEXPRESSBANNERLEADINGVIEW_H
#define PKEXPRESSBANNERLEADINGVIEW_H

@class UIView, PKPass, CAPortalLayer, CALayer, CAStateController, NSMutableArray, NSString;
@protocol SBUISystemApertureAccessoryView, OS_dispatch_source, PKExpressBannerLeadingViewDelegate;


#import "PKPassThumbnailView.h"

@interface PKExpressBannerLeadingView : UIView <SBUISystemApertureAccessoryView>

 {
    PKPass *_pass;
    PKPassThumbnailView *_passView;
    CAPortalLayer *_passPortal;
    CALayer *_contentLayer;
    CALayer *_frontLayer;
    CAStateController *_controller;
    int _state;
    int _sizeClass;
    NSObject<OS_dispatch_source> *_transitionTimer;
    NSMutableArray *_completions;
    CGSize _nativeSize;
    CGSize _nativeAlignmentSize;
    CGSize _targetSize;
    CGSize _targetAlignmentSize;
    UIEdgeInsets _targetAlignmentInsets;
    id<PKExpressBannerLeadingViewDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif