// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMMODELSTATUSACCOUNTLISTCARDDAV_H
#define RMMODELSTATUSACCOUNTLISTCARDDAV_H

@class NSString, NSNumber;


#import "RMModelStatusBase.h"

@interface RMModelStatusAccountListCardDAV : RMModelStatusBase

@property (copy, nonatomic) NSString *statusDeclarationIdentifier; // ivar: _statusDeclarationIdentifier
@property (copy, nonatomic) NSString *statusHostname; // ivar: _statusHostname
@property (copy, nonatomic) NSString *statusIdentifier; // ivar: _statusIdentifier
@property (copy, nonatomic) NSNumber *statusPort; // ivar: _statusPort
@property (copy, nonatomic) NSString *statusUsername; // ivar: _statusUsername
@property (copy, nonatomic) NSString *statusVisibleName; // ivar: _statusVisibleName


+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 declarationIdentifier:(id)arg1 visibleName:(id)arg2 hostname:(id)arg3 port:(id)arg4 username:(id)arg5 ;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithType:(short)arg0 ;


@end


#endif