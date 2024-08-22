// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSSETTINGSRECORD_H
#define DNDSSETTINGSRECORD_H

@class NSString;
@protocol NSCopying, NSMutableCopying, DNDSBackingStoreRecord;

#import <Foundation/Foundation.h>

#import "DNDSBehaviorSettingsRecord.h"
#import "DNDSConfigurationsRecord.h"
#import "DNDSBypassSettingsRecord.h"
#import "DNDSScheduleSettingsRecord.h"

@interface DNDSSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>



@property (readonly, copy, nonatomic) DNDSBehaviorSettingsRecord *behaviorSettings; // ivar: _behaviorSettings
@property (readonly, copy, nonatomic) DNDSConfigurationsRecord *configurations; // ivar: _configurations
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) DNDSBypassSettingsRecord *phoneCallBypassSettings; // ivar: _phoneCallBypassSettings
@property (readonly, copy, nonatomic) DNDSScheduleSettingsRecord *scheduleSettings; // ivar: _scheduleSettings
@property (readonly) Class superclass;


+(id)backingStoreWithFileURL:(id)arg0 ;
+(id)migrateDictionaryRepresentation:(id)arg0 fromVersionNumber:(NSUInteger)arg1 toVersionNumber:(NSUInteger)arg2 ;
+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
+(id)recordWithEncodedInfo:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithBehaviorSettings:(id)arg0 phoneCallBypassSettings:(id)arg1 scheduleSettings:(id)arg2 configurations:(id)arg3 ;
-(id)_initWithRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif