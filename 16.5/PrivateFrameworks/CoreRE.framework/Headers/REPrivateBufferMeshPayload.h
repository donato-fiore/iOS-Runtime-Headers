// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REPRIVATEBUFFERMESHPAYLOAD_H
#define REPRIVATEBUFFERMESHPAYLOAD_H

@class NSData, NSArray;
@protocol REMeshPayload, MTLBuffer;


#import "RESharedResourcePayload.h"
#import "RESerializedPayload.h"

@interface REPrivateBufferMeshPayload : RESharedResourcePayload <REMeshPayload>

 {
    NSData *_data;
}


@property (readonly, nonatomic) NSObject<MTLBuffer> *buffer; // ivar: _buffer
@property (readonly, nonatomic) NSUInteger bufferSize;
@property (readonly, nonatomic) NSArray *instances; // ivar: _instances
@property (readonly, nonatomic) NSArray *models; // ivar: _models
@property (readonly, nonatomic) NSArray *parts; // ivar: _parts
@property (retain, nonatomic) RESerializedPayload *serializedData; // ivar: serializedData
@property (copy, nonatomic) id *serializedDataBlock; // ivar: serializedDataBlock
@property (readonly, nonatomic, getter=isShareable) BOOL shareable;


+(BOOL)supportsSecureCoding;
-(id)bufferWithDevice:(id)arg0 ;
-(id)description;
-(id)initWithBuffer:(id)arg0 parts:(id)arg1 models:(id)arg2 instances:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif