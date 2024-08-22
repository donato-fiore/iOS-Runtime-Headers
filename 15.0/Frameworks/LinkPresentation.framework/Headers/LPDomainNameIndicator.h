// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPDOMAINNAMEINDICATOR_H
#define LPDOMAINNAMEINDICATOR_H

@class UIVisualEffectView, UILabel, UIImageView;


#import "LPComponentView.h"

@interface LPDomainNameIndicator : LPComponentView {
    UIVisualEffectView *_vibrancyView;
    UIVisualEffectView *_blurView;
    UILabel *_label;
    UIImageView *_glyphView;
}




-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 domainName:(id)arg1 theme:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutComponentView;


@end


#endif