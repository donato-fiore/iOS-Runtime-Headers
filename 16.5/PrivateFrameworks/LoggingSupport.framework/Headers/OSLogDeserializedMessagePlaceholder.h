// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSLOGDESERIALIZEDMESSAGEPLACEHOLDER_H
#define OSLOGDESERIALIZEDMESSAGEPLACEHOLDER_H

@class NSDictionary;


#import "OSLogMessagePlaceholder.h"
#import "_OSLogEventSerializationMetadata.h"

@interface OSLogDeserializedMessagePlaceholder : OSLogMessagePlaceholder

@property (readonly, nonatomic) NSDictionary *backingDict; // ivar: _backingDict
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata; // ivar: _metadata


-(id)initWithDict:(id)arg0 metadata:(id)arg1 ;
-(id)rawString;
-(id)tokens;
-(id)type;
-(id)typeNamespace;
-(int)precision;
-(int)width;


@end


#endif