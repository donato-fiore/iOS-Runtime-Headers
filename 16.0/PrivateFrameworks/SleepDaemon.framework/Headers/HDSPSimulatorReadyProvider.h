// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPSIMULATORREADYPROVIDER_H
#define HDSPSIMULATORREADYPROVIDER_H

@class NSString;
@protocol HDSPSystemReadyProvider, HDSPEnvironmentAware, HDSPSystemReadyDelegate;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPSimulatorReadyProvider : NSObject <HDSPSystemReadyProvider, HDSPEnvironmentAware>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDSPSystemReadyDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSystemReady;
@property (readonly) Class superclass;


-(BOOL)isInDemoMode;
-(id)initWithEnvironment:(id)arg0 ;


@end


#endif