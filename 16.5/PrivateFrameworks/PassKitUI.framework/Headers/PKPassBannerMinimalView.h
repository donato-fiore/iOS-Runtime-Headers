// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSBANNERMINIMALVIEW_H
#define PKPASSBANNERMINIMALVIEW_H

@class UIView, NSString;
@protocol SBUISystemApertureAccessoryView, PKPassBannerMinimalViewDelegate;


#import "PKPassBannerLeadingView.h"
#import "PKPassBannerTrailingView.h"

@interface PKPassBannerMinimalView : UIView <SBUISystemApertureAccessoryView>

 {
    NSInteger _style;
    PKPassBannerLeadingView *_leadingView;
    PKPassBannerTrailingView *_trailingView;
    CGFloat _interitemPadding;
    id<PKPassBannerMinimalViewDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_initWithStyle:(NSInteger)arg0 leadingView:(id)arg1 trailingView:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 commit:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setInteritemPadding:(CGFloat)arg0 ;
-(void)layoutSubviews;


@end


#endif