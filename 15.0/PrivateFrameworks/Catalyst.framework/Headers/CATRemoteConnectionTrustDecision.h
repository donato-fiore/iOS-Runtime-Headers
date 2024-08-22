// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATREMOTECONNECTIONTRUSTDECISION_H
#define CATREMOTECONNECTIONTRUSTDECISION_H


#import <Foundation/Foundation.h>

#import "CATRemoteConnection.h"

@interface CATRemoteConnectionTrustDecision : NSObject {
    CATRemoteConnection *mConnection;
    uint8_t mHasResponded;
}


@property (readonly) id *trust; // ivar: _trust


-(id)initWithConnection:(id)arg0 trust:(struct __SecTrust *)arg1 ;
-(void)dealloc;
-(void)respondWithDecisionToAllowUntrustedConnection:(BOOL)arg0 ;


@end


#endif