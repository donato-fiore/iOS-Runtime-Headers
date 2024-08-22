// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMPROTOCOLSTATUSREPORT_ERRORS_H
#define RMPROTOCOLSTATUSREPORT_ERRORS_H

@class RMModelPayloadBase, NSArray, NSString;



@interface RMProtocolStatusReport_Errors : RMModelPayloadBase

@property (copy, nonatomic) NSArray *reportReasons; // ivar: _reportReasons
@property (copy, nonatomic) NSString *reportStatusItem; // ivar: _reportStatusItem


+(id)allowedReportKeys;
+(id)buildRequiredOnlyWithStatusItem:(id)arg0 ;
+(id)buildWithStatusItem:(id)arg0 reasons:(id)arg1 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif