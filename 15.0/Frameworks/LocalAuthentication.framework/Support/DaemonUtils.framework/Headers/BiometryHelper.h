// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BIOMETRYHELPER_H
#define BIOMETRYHELPER_H

@class NSMutableDictionary, BKDevice, NSError, NSDictionary;
@protocol BiometryDelegate;

#import <Foundation/Foundation.h>


@interface BiometryHelper : NSObject {
    NSMutableDictionary *_databaseHashesByUserId;
}


@property (readonly, nonatomic) NSInteger biometryType; // ivar: _biometryType
@property (weak, nonatomic) NSObject<BiometryDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BKDevice *device; // ivar: _device
@property (readonly, nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (readonly, nonatomic) NSError *fault; // ivar: _fault
@property (readonly, nonatomic) NSDictionary *identities; // ivar: _identities
@property (readonly, nonatomic) NSError *permanentError; // ivar: _permanentError


+(id)pearlInstance;
+(id)sharedInstance;
+(id)touchIdInstance;
-(BOOL)_isEnrolled:(id)arg0 error:(*id)arg1 ;
-(BOOL)_shouldRetryAvailableDevices;
-(BOOL)deviceHasBiometryWithError:(*id)arg0 ;
-(BOOL)isAnyUserEnrolledWithError:(*id)arg0 ;
-(BOOL)isBiometryOnForApplePay:(id)arg0 ;
-(BOOL)isBiometryOnForUnlock:(id)arg0 ;
-(BOOL)isEnrolled:(id)arg0 error:(*id)arg1 ;
-(BOOL)isIdentificationEnabled:(id)arg0 ;
-(BOOL)isLockedOutForUser:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
-(BOOL)userPresent:(*BOOL)arg0 error:(*id)arg1 ;
-(id)_biolockoutStateForUser:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
-(id)_errorNotEnrolled:(BOOL)arg0 ;
-(id)_identitiesForUser:(id)arg0 ;
-(id)_lockoutErrorForExtendedState:(NSInteger)arg0 userId:(id)arg1 ;
-(id)_protectedConfigurationForUser:(id)arg0 ;
-(id)biometryDatabaseHashForUser:(id)arg0 error:(*id)arg1 ;
-(id)biometryLostErrorForUser:(id)arg0 request:(id)arg1 ;
-(id)catacombUUID:(id)arg0 ;
-(id)initWithBiometryType:(NSInteger)arg0 ;
-(id)lockoutErrorForState:(NSInteger)arg0 userId:(id)arg1 ;
-(unsigned int)_uidFromUserId:(id)arg0 ;
-(void)_clearHashes;
-(void)_refreshIdentitiesDueToAccessoryChange:(BOOL)arg0 ;
-(void)_setup;
-(void)_setupDeviceWithDescriptor:(id)arg0 ;
-(void)_setupWithFault:(id)arg0 ;
-(void)_setupWithPermanentError:(id)arg0 ;
-(void)dealloc;
-(void)resetBiometry;


@end


#endif