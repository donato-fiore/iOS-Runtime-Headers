// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKDEVICEPEARL_H
#define BKDEVICEPEARL_H

@protocol BKDevicePearlDelegate;


#import "BKDevice.h"

@interface BKDevicePearl : BKDevice

@property (weak, nonatomic) NSObject<BKDevicePearlDelegate> *delegate;
@property (readonly, nonatomic) NSInteger pearlState;


+(BOOL)deviceAvailableWithError:(*id)arg0 ;
-(BOOL)clearIdentityMigrationFailureForUser:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)disableFieldDiagnosticsWithError:(*id)arg0 ;
-(BOOL)enableFieldDiagnosticsWithTatsuManifest:(id)arg0 error:(*id)arg1 ;
-(BOOL)setTemplate:(id)arg0 forIdentity:(id)arg1 error:(*id)arg2 ;
-(NSInteger)deviceEventWithStatus:(unsigned int)arg0 ;
-(NSInteger)deviceStateWithStatus:(unsigned int)arg0 ;
-(id)createEnrollOperationWithError:(*id)arg0 ;
-(id)createMatchOperationWithError:(*id)arg0 ;
-(id)createPresenceDetectOperationWithError:(*id)arg0 ;
-(id)fieldDiagnosticsEncryptionKeyWithError:(*id)arg0 ;
-(id)fieldDiagnosticsRemainingTimeWithError:(*id)arg0 ;
-(id)fieldDiagnosticsTatsuManifestWithError:(*id)arg0 ;
-(id)generateFieldDiagnosticsNonceWithError:(*id)arg0 ;
-(id)queryIdentityMigrationFailureForUser:(unsigned int)arg0 error:(*id)arg1 ;
-(void)statusMessage:(unsigned int)arg0 client:(NSUInteger)arg1 ;


@end


#endif