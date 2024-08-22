// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCOMPONENTBEHAVIORHANDLER_H
#define SXCOMPONENTBEHAVIORHANDLER_H

@class UIView;

#import <Foundation/Foundation.h>

#import "SXComponentBehavior.h"
#import "SXComponentView.h"

@interface SXComponentBehaviorHandler : NSObject

@property (readonly, nonatomic) SXComponentBehavior *behavior; // ivar: _behavior
@property (readonly, nonatomic) UIView *behaviorView;
@property (readonly, nonatomic) SXComponentView *componentView; // ivar: _componentView
@property (readonly, nonatomic) BOOL isSetup; // ivar: _isSetup
@property (readonly, nonatomic) BOOL requiresContinuousUpdates;


-(id)initWithComponentView:(id)arg0 withBehavior:(id)arg1 ;
-(void)destroyWithBehaviorController:(id)arg0 ;
-(void)setupWithBehaviorController:(id)arg0 ;
-(void)updateWithBehaviorController:(id)arg0 ;


@end


#endif