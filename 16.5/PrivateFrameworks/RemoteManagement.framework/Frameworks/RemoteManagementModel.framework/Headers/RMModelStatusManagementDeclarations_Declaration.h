// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMMODELSTATUSMANAGEMENTDECLARATIONS_DECLARATION_H
#define RMMODELSTATUSMANAGEMENTDECLARATIONS_DECLARATION_H

@class NSNumber, NSString, NSArray;


#import "RMModelPayloadBase.h"

@interface RMModelStatusManagementDeclarations_Declaration : RMModelPayloadBase

@property (copy, nonatomic) NSNumber *statusActive; // ivar: _statusActive
@property (copy, nonatomic) NSString *statusIdentifier; // ivar: _statusIdentifier
@property (copy, nonatomic) NSArray *statusReasons; // ivar: _statusReasons
@property (copy, nonatomic) NSString *statusServerToken; // ivar: _statusServerToken
@property (copy, nonatomic) NSString *statusValid; // ivar: _statusValid


+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 serverToken:(id)arg1 active:(id)arg2 valid:(id)arg3 ;
+(id)buildWithIdentifier:(id)arg0 serverToken:(id)arg1 active:(id)arg2 valid:(id)arg3 reasons:(id)arg4 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif