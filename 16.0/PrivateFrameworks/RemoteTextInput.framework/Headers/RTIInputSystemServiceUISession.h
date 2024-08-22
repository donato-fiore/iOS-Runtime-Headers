// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTIINPUTSYSTEMSERVICEUISESSION_H
#define RTIINPUTSYSTEMSERVICEUISESSION_H

@class BSProcessHandle;


#import "RTIInputSystemServiceSession.h"

@interface RTIInputSystemServiceUISession : RTIInputSystemServiceSession {
    BSProcessHandle *_remoteProcess;
}




+(id)sessionWithConnection:(id)arg0 remoteProcess:(id)arg1 ;
-(id)bundleIdentifier;
-(id)initWithConnection:(id)arg0 remoteProcess:(id)arg1 ;
-(id)valueForEntitlement:(id)arg0 ;
-(int)pid;


@end


#endif