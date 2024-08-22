// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8FMCLIENT7SESSION_H
#define _TTC8FMCLIENT7SESSION_H


#import <Foundation/Foundation.h>


@interface _TtC8FMClient7Session : NSObject {
    ? clientBundleId;
    ? clientProcessName;
    ? _activeConnection;
    ? $__lazy_storage_$_serverProxy;
    ? authenticationProvider;
}




-(id)init;
-(void)invalidate;
-(void)registerAuthenticationProvider:(id)arg0 ;


@end


#endif