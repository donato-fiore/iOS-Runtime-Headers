// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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


-(id)existingFileProviderProxyWithTimeout:(CGFloat)arg0 onlyAlreadyLifetimeExtended:(BOOL)arg1 pid:(int)arg2 ;
-(id)newFileProviderProxyWithTimeout:(CGFloat)arg0 pid:(int)arg1 ;
-(void)asyncUnregisterLifetimeExtensionForObject:(id)arg0 ;
-(void)cancel;
-(void)dumpStateTo:(id)arg0 ;
-(void)invalidate;
-(void)registerLifetimeExtensionForObject:(id)arg0 ;
-(void)start;
-(void)terminateWithReason:(id)arg0 ;
-(void)unregisterLifetimeExtensionForObject:(id)arg0 ;
-(void)updatePresenceTCCWithAuditToken:(struct ? )arg0 ;


@end


#endif