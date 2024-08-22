// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TMLMODELSERIALIZE_H
#define TMLMODELSERIALIZE_H


#import <Foundation/Foundation.h>


@interface TMLModelSerialize : NSObject



+(id)decode:(id)arg0 ;
+(id)decodeZ85:(id)arg0 ;
+(id)pack:(struct ProtobufCMessage *)arg0 ;
+(id)verifySignature:(id)arg0 ;
+(struct ProtobufCMessage *)unpackData:(id)arg0 withDescriptor:(struct ProtobufCMessageDescriptor *)arg1 ;


@end


#endif