// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFAATOKENMANAGER_H
#define MFAATOKENMANAGER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface MFAATokenManager : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(BOOL)isTokenValidForFeatures:(NSUInteger)arg0 token:(id)arg1 ;
+(id)sharedManager;
-(id)_init;
-(id)init;
-(void)confirmActivationForAuthToken:(id)arg0 withUUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)confirmActivationForToken:(id)arg0 withUUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestActivationForAuthToken:(id)arg0 withUUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestActivationForToken:(id)arg0 withUUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestMetadataForAuthToken:(id)arg0 withUUID:(id)arg1 requestedLocale:(id)arg2 requestInfo:(id)arg3 completionHandler:(id)arg4 ;
-(void)requestMetadataForToken:(id)arg0 withUUID:(id)arg1 requestedLocale:(id)arg2 requestInfo:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif