// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDPCONTROLLER_H
#define CDPCONTROLLER_H

@protocol CDPAuthProvider, CDPStateUIProvider;

#import <Foundation/Foundation.h>

#import "CDPContext.h"
#import "CDPDaemonConnection.h"
#import "CDPStateUIProviderProxy.h"

@interface CDPController : NSObject

@property (retain, nonatomic) NSObject<CDPAuthProvider> *authProvider; // ivar: _authProvider
@property (readonly, nonatomic) CDPContext *context; // ivar: _context
@property (retain, nonatomic) CDPDaemonConnection *daemonConn; // ivar: _daemonConn
@property (retain, nonatomic) NSObject<CDPStateUIProvider> *uiProvider; // ivar: _uiProvider
@property (retain, nonatomic) CDPStateUIProviderProxy *uiProviderProxy; // ivar: _uiProviderProxy


-(id)init;
-(id)initWithContext:(id)arg0 ;
-(id)initWithXpcEndpoint:(id)arg0 context:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif