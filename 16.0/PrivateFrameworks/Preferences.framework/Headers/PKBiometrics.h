// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKBIOMETRICS_H
#define PKBIOMETRICS_H

@class BKDevicePearl, BKDeviceTouchID;

#import <Foundation/Foundation.h>


@interface PKBiometrics : NSObject

@property (retain, nonatomic) BKDevicePearl *pearlDevice; // ivar: _pearlDevice
@property (retain, nonatomic) BKDeviceTouchID *touchIDDevice; // ivar: _touchIDDevice


+(id)sharedInstance;
-(BOOL)isPeriocularEnrollmentSupported;
-(BOOL)removeIdentity:(id)arg0 ;
-(BOOL)setName:(id)arg0 forIdentity:(id)arg1 ;
-(NSInteger)deviceTypeForIdentityType:(NSInteger)arg0 ;
-(NSInteger)maximumIdentityCountForIdentityType:(NSInteger)arg0 ;
-(id)deviceForType:(NSInteger)arg0 ;
-(id)identitiesForIdentityType:(NSInteger)arg0 ;
-(id)init;
-(id)nameForIdentity:(id)arg0 ;
-(id)nextIdentityNameForIdentityType:(NSInteger)arg0 ;


@end


#endif