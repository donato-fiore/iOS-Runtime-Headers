// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2CONFIGPAYLOAD_H
#define NEIKEV2CONFIGPAYLOAD_H



#import "NEIKEv2Payload.h"
#import "NEIKEv2ConfigurationMessage.h"

@interface NEIKEv2ConfigPayload : NEIKEv2Payload

@property (retain) NEIKEv2ConfigurationMessage *configuration; // ivar: _configuration


+(id)copyTypeDescription;
-(BOOL)generatePayloadData;
-(BOOL)hasRequiredFields;
-(BOOL)parsePayloadData;
-(NSUInteger)type;
-(id)createConfigAttributeFromData:(id)arg0 attributeName:(id)arg1 attributeLen:(unsigned short)arg2 attributeType:(NSUInteger)arg3 customType:(NSUInteger)arg4 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;


@end


#endif