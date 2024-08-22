// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKPRIVATEEMAILCONTROLLER_H
#define AKPRIVATEEMAILCONTROLLER_H

@class NSString, AAFXPCSession;
@protocol AAFXPCSessionDelegate, AKPrivateEmailDaemonProtocol, AKPrivateEmailUIProvider;

#import <Foundation/Foundation.h>

#import "AKPrivateEmailClientImpl.h"

@interface AKPrivateEmailController : NSObject <AAFXPCSessionDelegate, AKPrivateEmailDaemonProtocol>

 {
    AKPrivateEmailClientImpl *_clientImpl;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AAFXPCSession *remoteService; // ivar: _remoteService
@property (readonly) Class superclass;
@property (retain) NSObject<AKPrivateEmailUIProvider> *uiProvider;


-(id)exportedObject;
-(id)init;
-(id)initWithXPCSession:(id)arg0 ;
-(void)configureRemoteInterface:(id)arg0 ;
-(void)deletePrivateEmailDatabaseWithCompletion:(id)arg0 ;
-(void)fetchPrivateEmailForAltDSID:(id)arg0 withKey:(id)arg1 completion:(id)arg2 ;
-(void)fetchPrivateEmailWithContext:(id)arg0 completion:(id)arg1 ;
-(void)getContextForRequestContext:(id)arg0 completion:(id)arg1 ;
-(void)listAllPrivateEmailsForAltDSID:(id)arg0 completion:(id)arg1 ;
-(void)lookupPrivateEmailForAltDSID:(id)arg0 withKey:(id)arg1 completion:(id)arg2 ;
-(void)lookupPrivateEmailWithContext:(id)arg0 completion:(id)arg1 ;
-(void)privateEmailListVersionWithCompletion:(id)arg0 ;
-(void)registerPrivateEmailForAltDSID:(id)arg0 withKey:(id)arg1 completion:(id)arg2 ;
-(void)removePrivateEmailKey:(id)arg0 completion:(id)arg1 ;


@end


#endif