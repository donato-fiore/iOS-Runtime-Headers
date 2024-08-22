// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXNAVIGATIONBANNERHELPER_H
#define PXNAVIGATIONBANNERHELPER_H

@class _UINavigationControllerPalette, UIViewController;

#import <Foundation/Foundation.h>


@interface PXNavigationBannerHelper : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) _UINavigationControllerPalette *palette; // ivar: _palette
@property (readonly, weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)initWithViewController:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif