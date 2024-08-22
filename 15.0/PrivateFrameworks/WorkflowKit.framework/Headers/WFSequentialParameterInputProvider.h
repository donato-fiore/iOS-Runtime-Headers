// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSEQUENTIALPARAMETERINPUTPROVIDER_H
#define WFSEQUENTIALPARAMETERINPUTPROVIDER_H

@class NSDictionary, NSMutableDictionary, NSMutableOrderedSet;
@protocol WFSequentialParameterInputProviderDelegate;

#import <Foundation/Foundation.h>

#import "WFAction.h"

@interface WFSequentialParameterInputProvider : NSObject

@property (retain, nonatomic) NSDictionary *defaultStates; // ivar: _defaultStates
@property (weak, nonatomic) NSObject<WFSequentialParameterInputProviderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) WFAction *fakeAction; // ivar: _fakeAction
@property (retain, nonatomic) NSMutableDictionary *inputtedStates; // ivar: _inputtedStates
@property (retain, nonatomic) NSDictionary *prompts; // ivar: _prompts
@property (retain, nonatomic) NSMutableOrderedSet *queuedParameters; // ivar: _queuedParameters


-(id)initWithDelegate:(id)arg0 ;
-(void)askForParameterIfAvailable;
-(void)startWithAction:(id)arg0 parameters:(id)arg1 defaultStates:(id)arg2 prompts:(id)arg3 ;


@end


#endif