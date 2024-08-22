// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCCAPACKAGEVIEW_H
#define NCCAPACKAGEVIEW_H

@class UIView, CAPackage, CAStateController, CALayer;



@interface NCCAPackageView : UIView {
    CAPackage *_package;
    CAStateController *_stateController;
    UIView *_packageContentView;
    CALayer *_packageLayer;
}


@property (nonatomic) CGFloat scale; // ivar: _scale


-(id)initWithPackageNamed:(id)arg0 inBundle:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setupPackageNamed:(id)arg0 inBundle:(id)arg1 ;
-(void)layoutSubviews;
-(void)removeAllStateChanges;
-(void)setStateName:(id)arg0 ;


@end


#endif