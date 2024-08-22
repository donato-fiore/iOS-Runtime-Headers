// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSBYPASSSETTINGSRECORD_H
#define DNDSBYPASSSETTINGSRECORD_H

@class NSString, NSNumber;
@protocol NSCopying, NSMutableCopying, DNDSBackingStoreRecord;

#import <Foundation/Foundation.h>


@interface DNDSBypassSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *immediateBypassCNGroupIdentifier; // ivar: _immediateBypassCNGroupIdentifier
@property (readonly, copy, nonatomic) NSNumber *immediateBypassEventSourceType; // ivar: _immediateBypassEventSourceType
@property (readonly, copy, nonatomic) NSNumber *repeatEventSourceBehaviorEnabledSetting; // ivar: _repeatEventSourceBehaviorEnabledSetting
@property (readonly) Class superclass;


+(id)_recordWithEncodedInfo:(id)arg0 error:(*id)arg1 ;
+(id)migrateDictionaryRepresentation:(id)arg0 fromVersionNumber:(NSUInteger)arg1 toVersionNumber:(NSUInteger)arg2 ;
+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
+(id)recordForLegacyPrivilegedSenderType:(NSUInteger)arg0 legacyAddressBookID:(int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)legacyPrivilegedSenderType;
-(id)_initWithImmediateBypassEventSourceType:(id)arg0 immediateBypassCNGroupIdentifier:(id)arg1 repeatEventSourceBehaviorEnabledSetting:(id)arg2 ;
-(id)_initWithRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif