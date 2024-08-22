// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCUICAPACKAGEVIEW_H
#define CCUICAPACKAGEVIEW_H

@class UIView, CAStateController, CALayer, NSString, CAPackage;
@protocol CCUIPunchOutRendering, CCUIPunchOutCompensating, NSCopying;


#import "CCUICAPackageDescription.h"

@interface CCUICAPackageView : UIView <CCUIPunchOutRendering, CCUIPunchOutCompensating, NSCopying>

 {
    CAStateController *_stateController;
    UIView *_packageContentView;
    CALayer *_packageLayer;
}


@property (nonatomic, setter=ccui_setCompensationAlpha:) CGFloat ccui_compensationAlpha;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CAPackage *package; // ivar: _package
@property (retain, nonatomic) CCUICAPackageDescription *packageDescription; // ivar: _packageDescription
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (readonly) Class superclass;


-(BOOL)ccui_configureForPunchOutRendering:(BOOL)arg0 ;
-(id)ccui_punchOutCompensatingCopy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)ccui_updatePunchOutCompensationIfNecessary;
-(void)layoutSubviews;
-(void)setStateName:(id)arg0 ;


@end


#endif