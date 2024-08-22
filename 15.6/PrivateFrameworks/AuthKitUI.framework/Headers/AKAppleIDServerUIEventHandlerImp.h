// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKAPPLEIDSERVERUIEVENTHANDLERIMP_H
#define AKAPPLEIDSERVERUIEVENTHANDLERIMP_H

@class NSString;
@protocol AKAppleIDServerUIEventHandler;

#import <Foundation/Foundation.h>


@interface AKAppleIDServerUIEventHandlerImp : NSObject <AKAppleIDServerUIEventHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)fetchUserInformationForAltDSID:(id)arg0 completion:(id)arg1 ;
+(void)postCDPFollowUpForError:(id)arg0 ;
+(void)reauthenticateWithContext:(id)arg0 withCompletion:(id)arg1 ;
+(void)startCDPRepairWithContext:(id)arg0 withAdditionalData:(id)arg1 completion:(id)arg2 ;
+(void)updateAccountUsernameForAltDSID:(id)arg0 withHarvestedData:(id)arg1 ;
+(void)updateStateWithExternalAuthenticationResponse:(id)arg0 forContext:(id)arg1 withAuthController:(id)arg2 completion:(id)arg3 ;


@end


#endif