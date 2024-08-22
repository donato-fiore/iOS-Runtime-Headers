// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKREADERMODEANIMATIONVIEW_H
#define PKREADERMODEANIMATIONVIEW_H

@class UIView, CAPackage, CALayer, CAStateController;



@interface PKReaderModeAnimationView : UIView {
    NSUInteger _state;
    CAPackage *_package;
    CALayer *_phoneLayer;
    CAStateController *_stateController;
    BOOL _isPhoneTarget;
}


@property (nonatomic) NSUInteger state;


-(NSUInteger)animationStateForProvisioningViewState:(NSUInteger)arg0 ;
-(id)initWithAssetName:(id)arg0 forPhoneTarget:(BOOL)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 assetName:(id)arg1 forPhoneTarget:(BOOL)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)setDigitalCardImage:(id)arg0 ;
-(void)setImage:(id)arg0 forPublishedObjectWithName:(id)arg1 ;
-(void)setPlasticCardImage:(id)arg0 ;
-(void)setWatchAssetImage:(id)arg0 ;


@end


#endif