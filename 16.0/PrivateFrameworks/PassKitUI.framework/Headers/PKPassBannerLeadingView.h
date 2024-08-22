// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSBANNERLEADINGVIEW_H
#define PKPASSBANNERLEADINGVIEW_H

@class UIView, PKPass, NSString;
@protocol SBUISystemApertureAccessoryView;


#import "PKPassThumbnailView.h"

@interface PKPassBannerLeadingView : UIView <SBUISystemApertureAccessoryView>

 {
    NSInteger _style;
    PKPass *_pass;
    PKPassThumbnailView *_passView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif