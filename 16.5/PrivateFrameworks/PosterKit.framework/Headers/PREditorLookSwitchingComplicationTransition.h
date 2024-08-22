// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREDITORLOOKSWITCHINGCOMPLICATIONTRANSITION_H
#define PREDITORLOOKSWITCHINGCOMPLICATIONTRANSITION_H

@class CSCachingVibrancyTransitionProvider, BSUIVibrancyConfiguration;

#import <Foundation/Foundation.h>

#import "PREditorRootViewController.h"

@interface PREditorLookSwitchingComplicationTransition : NSObject

@property (retain, nonatomic) CSCachingVibrancyTransitionProvider *cachingVibrancyTransitionProvider; // ivar: _cachingVibrancyTransitionProvider
@property (retain, nonatomic) BSUIVibrancyConfiguration *fromVibrancyConfiguration; // ivar: _fromVibrancyConfiguration
@property (retain, nonatomic) BSUIVibrancyConfiguration *toVibrancyConfiguration; // ivar: _toVibrancyConfiguration
@property (weak, nonatomic) PREditorRootViewController *viewController; // ivar: _viewController


-(id)initWithFromVibrancyConfiguration:(id)arg0 toVibrancyConfiguration:(id)arg1 viewController:(id)arg2 ;
-(id)initWithFromVibrancyConfiguration:(id)arg0 toVibrancyConfiguration:(id)arg1 viewController:(id)arg2 cachingVibrancyTransitionProvider:(id)arg3 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)updateInteractiveTransition:(CGFloat)arg0 ;


@end


#endif