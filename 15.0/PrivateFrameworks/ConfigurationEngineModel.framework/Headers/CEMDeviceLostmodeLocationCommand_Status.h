// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMDEVICELOSTMODELOCATIONCOMMAND_STATUS_H
#define CEMDEVICELOSTMODELOCATIONCOMMAND_STATUS_H

@class NSNumber, NSString;


#import "CEMPayloadBase.h"

@interface CEMDeviceLostmodeLocationCommand_Status : CEMPayloadBase

@property (copy, nonatomic) NSNumber *statusAltitude; // ivar: _statusAltitude
@property (copy, nonatomic) NSNumber *statusCourse; // ivar: _statusCourse
@property (copy, nonatomic) NSNumber *statusHorizontalAccuracy; // ivar: _statusHorizontalAccuracy
@property (copy, nonatomic) NSNumber *statusLatitude; // ivar: _statusLatitude
@property (copy, nonatomic) NSNumber *statusLongitude; // ivar: _statusLongitude
@property (copy, nonatomic) NSNumber *statusSpeed; // ivar: _statusSpeed
@property (copy, nonatomic) NSString *statusTimestamp; // ivar: _statusTimestamp
@property (copy, nonatomic) NSNumber *statusVerticalAccuracy; // ivar: _statusVerticalAccuracy


+(id)allowedReasons;
+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithLatitude:(id)arg0 withLongitude:(id)arg1 withHorizontalAccuracy:(id)arg2 withVerticalAccuracy:(id)arg3 withAltitude:(id)arg4 withSpeed:(id)arg5 withCourse:(id)arg6 withTimestamp:(id)arg7 ;
+(id)buildWithLatitude:(id)arg0 withLongitude:(id)arg1 withHorizontalAccuracy:(id)arg2 withVerticalAccuracy:(id)arg3 withAltitude:(id)arg4 withSpeed:(id)arg5 withCourse:(id)arg6 withTimestamp:(id)arg7 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)serializePayload;


@end


#endif