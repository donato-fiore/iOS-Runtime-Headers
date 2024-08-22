// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCOLORINGVIEW_H
#define NTKCOLORINGVIEW_H

@class UIView, UIColor, NSString;
@protocol NTKColoringView;


#import "_NTKColorManager.h"

@interface NTKColoringView : UIView <NTKColoringView>

 {
    _NTKColorManager *_colorManager;
}


@property (retain, nonatomic) UIColor *color;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *overrideColor; // ivar: _overrideColor
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesLegibility;


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif