// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXTOAST_H
#define PXTOAST_H

@class NSLayoutConstraint, UIView;

#import <Foundation/Foundation.h>

#import "PXToastConfiguration.h"

@interface PXToast : NSObject {
    PXToastConfiguration *_configuration;
}


@property (nonatomic) CGFloat bottomMargin; // ivar: _bottomMargin
@property (nonatomic) BOOL isShown; // ivar: _isShown
@property (retain, nonatomic) NSLayoutConstraint *offscreenConstraint; // ivar: _offscreenConstraint
@property (retain, nonatomic) NSLayoutConstraint *onscreenConstraint; // ivar: _onscreenConstraint
@property (retain, nonatomic) UIView *view; // ivar: _view


+(id)show:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_dismissAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_handleSwipe:(id)arg0 ;
-(void)_present;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)dismissAnimated:(BOOL)arg0 afterDelay:(CGFloat)arg1 ;


@end


#endif