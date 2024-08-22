// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCREDENTIALPAIRINGEXPLANATIONHEADERVIEW_H
#define PKCREDENTIALPAIRINGEXPLANATIONHEADERVIEW_H

@class UIView, UIImageView, UIActivityIndicatorView, UIVisualEffectView;


#import "PKSubcredentialPairingFlowControllerContext.h"

@interface PKCredentialPairingExplanationHeaderView : UIView {
    UIImageView *_imageView;
    PKSubcredentialPairingFlowControllerContext *_context;
    UIActivityIndicatorView *_spinner;
    UIVisualEffectView *_blurView;
}


@property (nonatomic) BOOL useCompactLayout; // ivar: _useCompactLayout


-(id)_fallbackPairingImage;
-(id)initWithContext:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_loadPairingImage;
-(void)_setPairingImage:(id)arg0 ;
-(void)_showLoadingContent;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif