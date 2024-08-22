// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUICONTENTMODULECONTENTCONTAINERVIEW_H
#define CCUICONTENTMODULECONTENTCONTAINERVIEW_H

@class UIView, MTMaterialView;



@interface CCUIContentModuleContentContainerView : UIView {
    BOOL _expanded;
    MTMaterialView *_moduleMaterialView;
}


@property (nonatomic) CGFloat compactContinuousCornerRadius; // ivar: _compactContinuousCornerRadius
@property (nonatomic) CGFloat expandedContinuousCornerRadius; // ivar: _expandedContinuousCornerRadius
@property (nonatomic) BOOL moduleProvidesOwnPlatter; // ivar: _moduleProvidesOwnPlatter


-(BOOL)_isContentClippingRequiredForSubview:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureModuleMaterialViewIfNecessary;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ignoreSubviewClipping:(BOOL)arg1 ;
-(void)_transitionToExpandedMode:(BOOL)arg0 force:(BOOL)arg1 ;
-(void)addSubview:(id)arg0 ;
-(void)didEndTransitionToExpandedMode:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)transitionToExpandedMode:(BOOL)arg0 ;


@end


#endif