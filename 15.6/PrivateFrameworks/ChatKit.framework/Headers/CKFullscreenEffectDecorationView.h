// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKFULLSCREENEFFECTDECORATIONVIEW_H
#define CKFULLSCREENEFFECTDECORATIONVIEW_H

@class UICollectionReusableView, UIView<CKFullscreenEffectView>;



@interface CKFullscreenEffectDecorationView : UICollectionReusableView

@property (weak, nonatomic) UIView<CKFullscreenEffectView> *effectView; // ivar: _effectView


+(id)decorationViewKind;
+(id)reuseIdentifier;
-(void)prepareForReuse;
-(void)setupForEffectView:(id)arg0 ;
-(void)tearDownEffectView;


@end


#endif