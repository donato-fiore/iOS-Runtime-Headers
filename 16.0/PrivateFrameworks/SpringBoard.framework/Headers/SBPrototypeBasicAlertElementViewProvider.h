// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPROTOTYPEBASICALERTELEMENTVIEWPROVIDER_H
#define SBPROTOTYPEBASICALERTELEMENTVIEWPROVIDER_H

@class NSString, UIView;
@protocol SAElement, SAAlertBehavior, SAUIElementViewProviding, SAAlertHosting, SAElementHosting;

#import <Foundation/Foundation.h>

#import "_SBPrototypeBasicAlertElementCompoundView.h"

@interface SBPrototypeBasicAlertElementViewProvider : NSObject <SAElement, SAAlertBehavior, SAUIElementViewProviding>

 {
    _SBPrototypeBasicAlertElementCompoundView *_minimalCompoundView;
}


@property (weak, nonatomic) NSObject<SAAlertHosting> *alertHost;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSObject<SAElement> *element;
@property (weak, nonatomic) NSObject<SAElementHosting> *elementHost;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger layoutAxis;
@property (readonly, nonatomic) UIView *leadingView; // ivar: _leadingView
@property (readonly, nonatomic) UIView *minimalView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *trailingView; // ivar: _trailingView


-(BOOL)_canShowWhileLocked;
-(BOOL)handleElementViewEvent:(NSInteger)arg0 ;
-(BOOL)hasAlertBehavior;
-(id)viewProvider;


@end


#endif