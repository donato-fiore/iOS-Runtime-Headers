// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2CHILDSAPAYLOAD_H
#define NEIKEV2CHILDSAPAYLOAD_H

@class NSArray;


#import "NEIKEv2Payload.h"

@interface NEIKEv2ChildSAPayload : NEIKEv2Payload {
    BOOL _includeDHGroup;
    NSArray *_proposals;
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