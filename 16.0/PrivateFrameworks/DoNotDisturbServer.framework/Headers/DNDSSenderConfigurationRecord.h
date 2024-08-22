// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSSENDERCONFIGURATIONRECORD_H
#define DNDSSENDERCONFIGURATIONRECORD_H

@class NSSet, NSString;
@protocol NSCopying, NSMutableCopying, DNDSBackingStoreRecord;

#import <Foundation/Foundation.h>

#import "DNDSBypassSettingsRecord.h"

@interface DNDSSenderConfigurationRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>



@property (readonly, copy, nonatomic) NSSet *allowedContactGroups; // ivar: _allowedContactGroups
@property (readonly, copy, nonatomic) NSSet *allowedContactTypes; // ivar: _allowedContactTypes
@property (readonly, copy, nonatomic) NSSet *allowedContacts; // ivar: _allowedContacts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *deniedContactGroups; // ivar: _deniedContactGroups
@property (readonly, copy, nonatomic) NSSet *deniedContactTypes; // ivar: _deniedContactTypes
@property (readonly, copy, nonatomic) NSSet *deniedContacts; // ivar: _deniedContacts
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) DNDSBypassSettingsRecord *phoneCallBypassSettings; // ivar: _phoneCallBypassSettings
@property (readonly) Class superclass;


+(id)migrateDictionaryRepresentation:(id)arg0 fromVersionNumber:(NSUInteger)arg1 toVersionNumber:(NSUInteger)arg2 ;
+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithAllowedContactTypes:(id)arg0 deniedContactTypes:(id)arg1 allowedContactGroups:(id)arg2 deniedContactGroups:(id)arg3 allowedContacts:(id)arg4 deniedContacts:(id)arg5 phoneCallBypassSettings:(id)arg6 ;
-(id)_initWithRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif