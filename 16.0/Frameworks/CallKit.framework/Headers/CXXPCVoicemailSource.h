// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXXPCVOICEMAILSOURCE_H
#define CXXPCVOICEMAILSOURCE_H

@class NSString, NSURL, NSSet, NSXPCConnection;


#import "CXVoicemailSource.h"

@interface CXXPCVoicemailSource : CXVoicemailSource

@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (copy, nonatomic) NSSet *capabilities; // ivar: _capabilities
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


-(BOOL)isConnected;
-(BOOL)isPermittedToUsePrivateAPI;
-(id)identifier;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(id)vendorProtocolDelegate;
-(int)processIdentifier;
-(void)dealloc;


@end


#endif