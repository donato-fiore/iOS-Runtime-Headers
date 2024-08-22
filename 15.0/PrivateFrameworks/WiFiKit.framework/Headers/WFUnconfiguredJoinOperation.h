// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFUNCONFIGUREDJOINOPERATION_H
#define WFUNCONFIGUREDJOINOPERATION_H

@class AirPortAssistantController, UINavigationController, NSDictionary, UIViewController;
@protocol AirPortAssistantControllerDelegate;


#import "WFOperation.h"

@interface WFUnconfiguredJoinOperation : WFOperation <AirPortAssistantControllerDelegate>



@property (retain, nonatomic) AirPortAssistantController *airportController; // ivar: _airportController
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (retain, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (retain, nonatomic) UIViewController *rootViewController; // ivar: _rootViewController


-(id)initWithParameters:(id)arg0 rootViewController:(id)arg1 ;
-(void)airPortAssistantComplete:(id)arg0 result:(int)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(void)finish;
-(void)start;


@end


#endif