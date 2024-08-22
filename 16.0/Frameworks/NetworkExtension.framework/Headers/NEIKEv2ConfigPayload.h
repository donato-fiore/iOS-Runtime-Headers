// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2CONFIGPAYLOAD_H
#define NEIKEV2CONFIGPAYLOAD_H



#import "NEIKEv2Payload.h"
#import "NEIKEv2ConfigurationMessage.h"

@interface NEIKEv2ConfigPayload : NEIKEv2Payload {
    NEIKEv2ConfigurationMessage *_configuration;
}




+(id)copyTypeDescription;
-(BOOL)generatePayloadData;
-(BOOL)hasRequiredFields;
-(BOOL)parsePayloadData;
-(NSUInteger)type;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;


@end


#endif