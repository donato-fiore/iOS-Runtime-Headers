// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCREDENTIALPAIRINGEXPLANATIONHEADERVIEW_H
#define PKCREDENTIALPAIRINGEXPLANATIONHEADERVIEW_H

@class UIView, UIImageView;


#import "PKSubcredentialPairingFlowControllerContext.h"

@interface PKCredentialPairingExplanationHeaderView : UIView {
    UIImageView *_imageView;
    PKSubcredentialPairingFlowControllerContext *_context;
}


@property (nonatomic) BOOL useCompactLayout; // ivar: _useCompactLayout


-(id)initWithContext:(id)arg0 ;
-(id)pairingImage;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif