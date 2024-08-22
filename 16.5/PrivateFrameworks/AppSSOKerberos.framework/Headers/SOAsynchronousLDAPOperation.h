// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOASYNCHRONOUSLDAPOPERATION_H
#define SOASYNCHRONOUSLDAPOPERATION_H

@class NSString;


#import "SOAsynchronousOperation.h"

@interface SOAsynchronousLDAPOperation : SOAsynchronousOperation

@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy) id *completion; // ivar: _completion
@property (retain, nonatomic) NSString *host; // ivar: _host
@property (nonatomic) unsigned short port; // ivar: _port
@property (retain, nonatomic) NSString *realm; // ivar: _realm
@property (nonatomic) BOOL requireTLSForLDAP; // ivar: _requireTLSForLDAP


-(id)initWithRealm:(id)arg0 andHost:(id)arg1 andPort:(unsigned short)arg2 andBundleIdentifier:(id)arg3 andRequireTLSForLDAP:(BOOL)arg4 andCompletion:(id)arg5 ;
-(void)main;


@end


#endif