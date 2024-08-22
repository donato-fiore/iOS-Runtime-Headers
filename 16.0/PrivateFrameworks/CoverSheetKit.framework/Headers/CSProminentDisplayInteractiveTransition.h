// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSPROMINENTDISPLAYINTERACTIVETRANSITION_H
#define CSPROMINENTDISPLAYINTERACTIVETRANSITION_H

@class UIFont, BSUIVibrancyConfiguration;
@protocol CSProminentDisplayTransitioning;

#import <Foundation/Foundation.h>

#import "CSProminentDisplayViewController.h"

@interface CSProminentDisplayInteractiveTransition : NSObject <CSProminentDisplayTransitioning>



@property (readonly, nonatomic) UIFont *baseFont; // ivar: _baseFont
@property (readonly, copy, nonatomic) BSUIVibrancyConfiguration *fromVibrancyConfiguration; // ivar: _fromVibrancyConfiguration
@property (readonly, copy, nonatomic) BSUIVibrancyConfiguration *toVibrancyConfiguration; // ivar: _toVibrancyConfiguration
@property (weak, nonatomic) CSProminentDisplayViewController *viewController; // ivar: _viewController


-(id)initWithViewController:(id)arg0 baseFont:(id)arg1 fromVibrancyConfiguration:(id)arg2 toVibrancyConfiguration:(id)arg3 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)updateInteractiveTransition:(CGFloat)arg0 ;


@end


#endif