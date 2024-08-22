// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHARDWAREBUTTONGESTUREPARAMETERSPROVIDERBASE_H
#define SBHARDWAREBUTTONGESTUREPARAMETERSPROVIDERBASE_H

@class NSString, NSMapTable;
@protocol SBHardwareButtonGestureParametersProvider, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBHardwareButtonGestureParameters.h"

@interface SBHardwareButtonGestureParametersProviderBase : NSObject <SBHardwareButtonGestureParametersProvider, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBHardwareButtonGestureParameters *hardwareButtonGestureParameters;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *observers; // ivar: _observers
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)addHardwareButtonGestureParametersObserver:(id)arg0 ;
-(void)publishUpdatedParameters:(id)arg0 ;
-(void)removeHardwareButtonGestureParametersObserver:(id)arg0 ;


@end


#endif