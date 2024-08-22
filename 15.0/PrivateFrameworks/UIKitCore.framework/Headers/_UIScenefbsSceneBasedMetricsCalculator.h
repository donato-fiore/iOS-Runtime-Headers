// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISCENEFBSSCENEBASEDMETRICSCALCULATOR_H
#define _UISCENEFBSSCENEBASEDMETRICSCALCULATOR_H

@class NSString;
@protocol _UISceneMetricsCalculating;

#import <Foundation/Foundation.h>

#import "UIWindowScene.h"

@interface _UIScenefbsSceneBasedMetricsCalculator : NSObject <_UISceneMetricsCalculating>



@property (weak, nonatomic, setter=_setScene:) UIWindowScene *_scene; // ivar: _scene
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_updateMetricsOnWindows:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif