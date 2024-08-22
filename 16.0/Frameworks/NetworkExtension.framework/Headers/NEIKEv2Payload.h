// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2PAYLOAD_H
#define NEIKEV2PAYLOAD_H

@class NSData;
@protocol NEPrettyDescription;

#import <Foundation/Foundation.h>


@interface NEIKEv2Payload : NSObject <NEPrettyDescription>

 {
    BOOL _isInbound;
    NSData *_payloadData;
}


@property (readonly) BOOL hasRequiredFields;
@property (readonly) NSUInteger type;


+(id)copyTypeDescription;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;


@end


#endif