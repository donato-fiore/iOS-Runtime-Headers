// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSLOGDESERIALIZEDEVENTMESSAGEARGUMENT_H
#define OSLOGDESERIALIZEDEVENTMESSAGEARGUMENT_H

@class NSDictionary;


#import "OSLogEventMessageArgument.h"
#import "_OSLogEventSerializationMetadata.h"

@interface OSLogDeserializedEventMessageArgument : OSLogEventMessageArgument

@property (readonly, nonatomic) NSDictionary *backingDict; // ivar: _backingDict
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata; // ivar: _metadata


-(*void)rawBytes;
-(CGFloat)doubleValue;
-(NSInteger)int64Value;
-(NSUInteger)availability;
-(NSUInteger)category;
-(NSUInteger)privacy;
-(NSUInteger)scalarCategory;
-(NSUInteger)scalarType;
-(NSUInteger)unsignedInt64Value;
-(id)_numValue;
-(id)initWithDict:(id)arg0 metadata:(id)arg1 ;
-(id)longDoubleValue;
-(id)objectRepresentation;
-(unsigned short)rawBytesLength;


@end


#endif