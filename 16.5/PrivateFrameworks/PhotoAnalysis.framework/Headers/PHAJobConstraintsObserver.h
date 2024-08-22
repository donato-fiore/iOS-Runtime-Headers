// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHAJOBCONSTRAINTSOBSERVER_H
#define PHAJOBCONSTRAINTSOBSERVER_H

@protocol PHAJobConstraintsObserverDelegate;

#import <Foundation/Foundation.h>

#import "PHAJobConstraints.h"

@interface PHAJobConstraintsObserver : NSObject

@property (retain, nonatomic) PHAJobConstraints *currentConstraints; // ivar: _currentConstraints
@property (weak, nonatomic) NSObject<PHAJobConstraintsObserverDelegate> *delegate; // ivar: _delegate
@property BOOL shutdownRequested; // ivar: _shutdownRequested


-(id)acceptConstraints:(id)arg0 mask:(id)arg1 completion:(id)arg2 ;
-(id)init;
-(id)initWithInitialConstraints:(id)arg0 delegate:(id)arg1 ;
-(void)dealloc;


@end


#endif