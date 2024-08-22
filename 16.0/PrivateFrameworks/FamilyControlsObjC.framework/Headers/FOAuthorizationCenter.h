// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FOAUTHORIZATIONCENTER_H
#define FOAUTHORIZATIONCENTER_H

@class NSArray, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface FOAuthorizationCenter : NSObject

@property (readonly) NSArray *authorizationRecords;
@property (readonly) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)sharedCenter;
-(id)init;
-(id)initWithXPCConnection:(id)arg0 ;
-(void)dealloc;
-(void)requestAuthorizationForRecordIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestInternalAuthorizationWithCompletionHandler:(id)arg0 ;
-(void)resetAuthorizationForRecordIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)revokeAuthorizationForDeletionForRecordIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)revokeAuthorizationForRecordIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)revokeInternalAuthorizationWithCompletionHandler:(id)arg0 ;


@end


#endif