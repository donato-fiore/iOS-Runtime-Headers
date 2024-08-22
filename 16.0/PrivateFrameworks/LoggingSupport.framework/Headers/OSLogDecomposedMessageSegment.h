// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSLOGDECOMPOSEDMESSAGESEGMENT_H
#define OSLOGDECOMPOSEDMESSAGESEGMENT_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "OSLogDeserializedEventMessageArgument.h"
#import "OSLogDeserializedMessagePlaceholder.h"

@interface OSLogDecomposedMessageSegment : NSObject

@property (readonly, nonatomic) OSLogDeserializedEventMessageArgument *argument; // ivar: _argument
@property (readonly, nonatomic) NSDictionary *backingDict; // ivar: _backingDict
@property (readonly, nonatomic) NSString *literalPrefix; // ivar: _literalPrefix
@property (readonly, nonatomic) OSLogDeserializedMessagePlaceholder *placeholder; // ivar: _placeholder


-(id)initWithDict:(id)arg0 metadata:(id)arg1 ;


@end


#endif