// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCUICAPACKAGEVIEW_H
#define CCUICAPACKAGEVIEW_H

@class UIView, CAStateController, CALayer, CAPackage;


#import "CCUICAPackageDescription.h"

@interface CCUICAPackageView : UIView {
    CAStateController *_stateController;
    UIView *_packageContentView;
    CALayer *_packageLayer;
}


@property (retain, nonatomic) CAPackage *package; // ivar: _package
@property (retain, nonatomic) CCUICAPackageDescription *packageDescription; // ivar: _packageDescription
@property (nonatomic) CGFloat scale; // ivar: _scale


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setStateName:(id)arg0 ;


@end


#endif