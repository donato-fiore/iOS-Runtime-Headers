// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POSERVICECONNECTION_H
#define POSERVICECONNECTION_H

@class NSString, NSXPCConnection;
@protocol POServiceProtocol;

#import <Foundation/Foundation.h>


@interface POServiceConnection : NSObject <POServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL forLogin; // ivar: _forLogin
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property unsigned int uid; // ivar: _uid
@property (retain) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)xpcQueue;
-(BOOL)_connectToService;
-(id)initWithUid:(unsigned int)arg0 forLogin:(BOOL)arg1 ;
-(void)createUserAccount:(id)arg0 passwordContext:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)getLoginTypeForUser:(id)arg0 completion:(id)arg1 ;
-(void)performLocalPasswordLogin:(id)arg0 passwordContext:(id)arg1 completion:(id)arg2 ;
-(void)performPasswordLogin:(id)arg0 passwordContext:(id)arg1 updateLocalAccountPassword:(BOOL)arg2 completion:(id)arg3 ;
-(void)performSEPKeyLogin:(id)arg0 completion:(id)arg1 ;
-(void)saveCredentialForUserName:(id)arg0 passwordContext:(id)arg1 completion:(id)arg2 ;
-(void)screenDidUnlockWithCompletion:(id)arg0 ;


@end


#endif