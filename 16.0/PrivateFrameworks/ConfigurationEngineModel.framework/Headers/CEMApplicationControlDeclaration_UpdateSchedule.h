// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMAPPLICATIONCONTROLDECLARATION_UPDATESCHEDULE_H
#define CEMAPPLICATIONCONTROLDECLARATION_UPDATESCHEDULE_H

@class NSNumber, NSString;


#import "CEMPayloadBase.h"

@interface CEMApplicationControlDeclaration_UpdateSchedule : CEMPayloadBase

@property (copy, nonatomic) NSNumber *payloadDuration; // ivar: _payloadDuration
@property (copy, nonatomic) NSString *payloadEndTime; // ivar: _payloadEndTime
@property (copy, nonatomic) NSString *payloadMode; // ivar: _payloadMode
@property (copy, nonatomic) NSString *payloadStartTime; // ivar: _payloadStartTime


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithMode:(id)arg0 ;
+(id)buildWithMode:(id)arg0 withDuration:(id)arg1 withStartTime:(id)arg2 withEndTime:(id)arg3 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif