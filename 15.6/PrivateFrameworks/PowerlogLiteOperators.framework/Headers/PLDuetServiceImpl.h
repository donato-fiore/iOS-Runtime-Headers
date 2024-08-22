// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLDUETSERVICEIMPL_H
#define PLDUETSERVICEIMPL_H

@class PLService, PLXPCResponderOperatorComposition, PLXPCListenerOperatorComposition;

#import <Foundation/Foundation.h>


@interface PLDuetServiceImpl : NSObject

@property (weak) PLService *duetService; // ivar: _duetService
@property (retain) PLXPCResponderOperatorComposition *energyResponder; // ivar: _energyResponder
@property (retain) PLXPCListenerOperatorComposition *eventListener; // ivar: _eventListener


-(void)initOperatorDependancies:(id)arg0 ;
-(void)stopService;


@end


#endif