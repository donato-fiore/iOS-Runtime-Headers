// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSTARTUPTRANSITIONFACTORY_H
#define SBSTARTUPTRANSITIONFACTORY_H


#import <Foundation/Foundation.h>

#import "SBInitialRestartState.h"

@interface SBStartupTransitionFactory : NSObject {
    SBInitialRestartState *_initialRestartState;
}




-(id)_transactionForDestination:(NSUInteger)arg0 context:(id)arg1 ;
-(id)initWithInitialRestartState:(id)arg0 ;
-(id)transitionForContext:(id)arg0 outDestination:(*NSUInteger)arg1 ;


@end


#endif