// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPDDEADENDEXTENSIONSESSION_H
#define FPDDEADENDEXTENSIONSESSION_H

@class NSString;
@protocol FPDExtensionSessionProtocol;

#import <Foundation/Foundation.h>


@interface FPDDeadEndExtensionSession : NSObject <FPDExtensionSessionProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasFileProviderAttributionMDMAccess; // ivar: hasFileProviderAttributionMDMAccess
@property (nonatomic) BOOL hasFileProviderPresenceTCCAccess; // ivar: hasFileProviderPresenceTCCAccess
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)existingFileProviderProxyWithTimeout:(BOOL)arg0 onlyAlreadyLifetimeExtended:(BOOL)arg1 pid:(int)arg2 ;
-(id)newFileProviderProxyWithPID:(int)arg0 ;
-(id)newFileProviderProxyWithTimeout:(BOOL)arg0 pid:(int)arg1 ;
-(id)newFileProviderProxyWithoutPID;
-(id)newFileProviderProxyWithoutPIDWithTimeout:(BOOL)arg0 ;
-(void)asyncUnregisterLifetimeExtensionForObject:(id)arg0 ;
-(void)cancel;
-(void)dumpStateTo:(id)arg0 ;
-(void)invalidate;
-(void)registerLifetimeExtensionForObject:(id)arg0 ;
-(void)start;
-(void)unregisterLifetimeExtensionForObject:(id)arg0 ;
-(void)updatePresenceTCCWithAuditToken:(struct ? )arg0 ;


@end


#endif