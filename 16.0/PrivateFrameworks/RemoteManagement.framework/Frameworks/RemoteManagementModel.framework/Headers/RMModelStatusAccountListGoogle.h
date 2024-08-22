// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMMODELSTATUSACCOUNTLISTGOOGLE_H
#define RMMODELSTATUSACCOUNTLISTGOOGLE_H

@class NSNumber, NSString;


#import "RMModelStatusBase.h"

@interface RMModelStatusAccountListGoogle : RMModelStatusBase

@property (copy, nonatomic) NSNumber *statusAreCalendarsEnabled; // ivar: _statusAreCalendarsEnabled
@property (copy, nonatomic) NSNumber *statusAreContactsEnabled; // ivar: _statusAreContactsEnabled
@property (copy, nonatomic) NSNumber *statusAreNotesEnabled; // ivar: _statusAreNotesEnabled
@property (copy, nonatomic) NSString *statusDeclarationIdentifier; // ivar: _statusDeclarationIdentifier
@property (copy, nonatomic) NSString *statusIdentifier; // ivar: _statusIdentifier
@property (copy, nonatomic) NSNumber *statusIsMailEnabled; // ivar: _statusIsMailEnabled
@property (copy, nonatomic) NSString *statusUsername; // ivar: _statusUsername
@property (copy, nonatomic) NSString *statusVisibleName; // ivar: _statusVisibleName


+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 declarationIdentifier:(id)arg1 visibleName:(id)arg2 username:(id)arg3 isMailEnabled:(id)arg4 areCalendarsEnabled:(id)arg5 areContactsEnabled:(id)arg6 areNotesEnabled:(id)arg7 ;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithType:(short)arg0 ;


@end


#endif