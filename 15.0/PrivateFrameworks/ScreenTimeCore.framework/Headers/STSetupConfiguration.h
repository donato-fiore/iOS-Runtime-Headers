// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSETUPCONFIGURATION_H
#define STSETUPCONFIGURATION_H

@class NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "STUserID.h"
#import "STOpaquePasscode.h"

@interface STSetupConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) STUserID *associatedUser; // ivar: _associatedUser
@property (readonly, copy) NSSet *availableContactManagementStates;
@property (readonly, copy) NSSet *availableScreenTimeStates;
@property (readonly) NSInteger contactManagementState; // ivar: _contactManagementState
@property (readonly, copy) STOpaquePasscode *passcode; // ivar: _passcode
@property (readonly) NSInteger screenTimeState; // ivar: _screenTimeState
@property (readonly) BOOL userHasContacts; // ivar: _userHasContacts


+(BOOL)_isContactManagementStateValid:(NSInteger)arg0 pairedWithUserHasContacts:(BOOL)arg1 ;
+(BOOL)_isScreenTimeStateValid:(NSInteger)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSetupConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionForContactManagementStates:(id)arg0 ;
-(id)_descriptionForScreenTimeStates:(id)arg0 ;
-(id)_initWithUser:(id)arg0 screenTimeState:(NSInteger)arg1 passcode:(id)arg2 contactManagementState:(NSInteger)arg3 userHasContacts:(BOOL)arg4 ;
-(id)configurationWithUpdatedContactManagementState:(NSInteger)arg0 error:(*id)arg1 ;
-(id)configurationWithUpdatedPasscode:(id)arg0 ;
-(id)configurationWithUpdatedScreenTimeState:(NSInteger)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUser:(id)arg0 screenTimeState:(NSInteger)arg1 passcode:(id)arg2 contactManagementState:(NSInteger)arg3 userHasContacts:(BOOL)arg4 error:(*id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif