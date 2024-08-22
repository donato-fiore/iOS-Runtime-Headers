// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2NOTIFYPAYLOAD_H
#define NEIKEV2NOTIFYPAYLOAD_H

@class NSData;


#import "NEIKEv2Payload.h"
#import "NEIKEv2SPI.h"

@interface NEIKEv2NotifyPayload : NEIKEv2Payload {
    NSUInteger _notifyType;
    NSData *_data;
    NEIKEv2SPI *_spi;
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