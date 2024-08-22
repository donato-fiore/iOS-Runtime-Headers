// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RESERIALIZEDPAYLOAD_H
#define RESERIALIZEDPAYLOAD_H

@class NSString;
@protocol OS_dispatch_data;


#import "RESharedResourcePayload.h"

@interface RESerializedPayload : RESharedResourcePayload

@property (readonly, nonatomic) NSObject<OS_dispatch_data> *blobData; // ivar: _blobData
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *serializedData; // ivar: _serializedData
@property (readonly, nonatomic) NSString *typeName; // ivar: _typeName


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTypeName:(id)arg0 serializedBytes:(*void)arg1 size:(NSUInteger)arg2 blobBytes:(*void)arg3 size:(NSUInteger)arg4 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif