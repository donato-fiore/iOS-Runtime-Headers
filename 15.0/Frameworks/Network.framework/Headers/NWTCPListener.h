// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWTCPLISTENER_H
#define NWTCPLISTENER_H

@class NSError, NSString;
@protocol NWTCPListenerDelegate, OS_nw_listener;

#import <Foundation/Foundation.h>

#import "NWEndpoint.h"
#import "NWParameters.h"

@interface NWTCPListener : NSObject

@property (weak) NSObject<NWTCPListenerDelegate> *delegate; // ivar: _delegate
@property (retain) NWEndpoint *endpoint; // ivar: _endpoint
@property (retain) NSError *error; // ivar: _error
@property (retain) NSObject<OS_nw_listener> *internalListener; // ivar: _internalListener
@property (retain) NSString *launchdKey; // ivar: _launchdKey
@property (retain) NWEndpoint *localEndpoint; // ivar: _localEndpoint
@property (retain) NWParameters *parameters; // ivar: _parameters


-(id)initWithBonjourServiceEndpoint:(id)arg0 parameters:(id)arg1 delegate:(id)arg2 ;
-(id)initWithLaunchdKey:(id)arg0 parameters:(id)arg1 delegate:(id)arg2 ;
-(id)initWithParameters:(id)arg0 delegate:(id)arg1 ;
-(id)initWithParameters:(id)arg0 delegate:(id)arg1 launchdKey:(id)arg2 bonjourEndpoint:(id)arg3 ;
-(void)cancel;
-(void)handleError:(id)arg0 ;
-(void)handleNewConnection:(id)arg0 ;
-(void)startInternal;


@end


#endif