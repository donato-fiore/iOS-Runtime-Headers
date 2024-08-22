// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GCIPCREMOTEPROCESS_H
#define _GCIPCREMOTEPROCESS_H

@class NSString, NSMutableSet, NSArray;
@protocol _GCIPCProcess;

#import <Foundation/Foundation.h>


@interface _GCIPCRemoteProcess : NSObject <_GCIPCProcess>



@property (readonly) int auditSessionIdentifier; // ivar: _auditSessionIdentifier
@property (readonly) ? auditToken; // ivar: _auditToken
@property (readonly) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSMutableSet *connectionInvalidationRegistrations; // ivar: _connectionInvalidationRegistrations
@property (copy) NSArray *connections; // ivar: _connections
@property (readonly) unsigned int effectiveGroupIdentifier; // ivar: _effectiveGroupIdentifier
@property (readonly) unsigned int effectiveUserIdentifier; // ivar: _effectiveUserIdentifier
@property (readonly) int processIdentifier; // ivar: _processIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToProcess:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(id)redactedDescription;
-(void)addConnection:(id)arg0 ;
-(void)populateBundleIdentifierForConnection:(id)arg0 ;


@end


#endif