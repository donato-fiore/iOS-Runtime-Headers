// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSENDERCONFIGURATION_H
#define DNDSENDERCONFIGURATION_H

@class NSSet;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DNDBypassSettings.h"

@interface DNDSenderConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSSet *allowedContactGroups; // ivar: _allowedContactGroups
@property (readonly, copy, nonatomic) NSSet *allowedContactTypes; // ivar: _allowedContactTypes
@property (readonly, copy, nonatomic) NSSet *allowedContacts; // ivar: _allowedContacts
@property (readonly, copy, nonatomic) NSSet *deniedContactGroups; // ivar: _deniedContactGroups
@property (readonly, copy, nonatomic) NSSet *deniedContactTypes; // ivar: _deniedContactTypes
@property (readonly, copy, nonatomic) NSSet *deniedContacts; // ivar: _deniedContacts
@property (readonly, copy, nonatomic) DNDBypassSettings *phoneCallBypassSettings; // ivar: _phoneCallBypassSettings


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionForRedacted:(BOOL)arg0 ;
-(id)_evaluatedBypassSettings:(id)arg0 ;
-(id)_initWithAllowedContactTypes:(id)arg0 deniedContactTypes:(id)arg1 allowedContactGroups:(id)arg2 deniedContactGroups:(id)arg3 allowedContacts:(id)arg4 deniedContacts:(id)arg5 phoneCallBypassSettings:(id)arg6 ;
-(id)_redactedDescriptionsForContacts:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)redactedDescription;
-(void)diffAgainstObject:(id)arg0 usingDiffBuilder:(id)arg1 withDescription:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif