// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWUDPLISTENER_H
#define NWUDPLISTENER_H

@class NSError;
@protocol NWUDPListenerDelegate, OS_nw_listener;

#import <Foundation/Foundation.h>

#import "NWEndpoint.h"
#import "NWParameters.h"

@interface NWUDPListener : NSObject

@property (weak) NSObject<NWUDPListenerDelegate> *delegate; // ivar: _delegate
@property (retain) NWEndpoint *endpoint; // ivar: _endpoint
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain) NSObject<OS_nw_listener> *internalListener; // ivar: _internalListener
@property (retain, nonatomic) NWEndpoint *localEndpoint; // ivar: _localEndpoint
@property (retain) NWParameters *parameters; // ivar: _parameters


-(id)initWithParameters:(id)arg0 delegate:(id)arg1 ;
-(void)handleConnection:(id)arg0 ;
-(void)handleError:(id)arg0 ;


@end


#endif