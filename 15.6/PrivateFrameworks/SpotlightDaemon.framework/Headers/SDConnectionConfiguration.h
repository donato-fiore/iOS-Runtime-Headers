// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SDCONNECTIONCONFIGURATION_H
#define SDCONNECTIONCONFIGURATION_H

@class NSSet, NSString;
@protocol CSXPCConnectionConfiguration, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface SDConnectionConfiguration : NSObject <CSXPCConnectionConfiguration>



@property (readonly, nonatomic) NSSet *allowedBundleIDs; // ivar: _allowedBundleIDs
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (readonly, nonatomic) unsigned int egid; // ivar: _egid
@property (readonly, nonatomic) unsigned int euid; // ivar: _euid
@property (readonly, nonatomic) BOOL internal; // ivar: _internal
@property (readonly, nonatomic) BOOL isExtension; // ivar: _isExtension
@property (readonly, nonatomic) BOOL isPrivate; // ivar: _isPrivate
@property (readonly, nonatomic) NSString *personaID; // ivar: _personaID
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) BOOL privateIndexNonSandboxAllowed; // ivar: _privateIndexNonSandboxAllowed
@property (readonly, nonatomic) NSString *protectionClass; // ivar: _protectionClass
@property (readonly, nonatomic) BOOL quotaDisabled; // ivar: _quotaDisabled
@property (readonly, nonatomic) BOOL searchInternal; // ivar: _searchInternal


-(id)initWithConnection:(id)arg0 isPrivate:(BOOL)arg1 ;


@end


#endif