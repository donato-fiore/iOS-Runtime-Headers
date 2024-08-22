// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2TRAFFICSELECTORPAYLOAD_H
#define NEIKEV2TRAFFICSELECTORPAYLOAD_H

@class NSArray;


#import "NEIKEv2Payload.h"

@interface NEIKEv2TrafficSelectorPayload : NEIKEv2Payload

@property (retain) NSArray *trafficSelectors; // ivar: _trafficSelectors


+(id)copyTypeDescription;
-(BOOL)generatePayloadData;
-(BOOL)hasRequiredFields;
-(BOOL)parsePayloadData;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;


@end


#endif