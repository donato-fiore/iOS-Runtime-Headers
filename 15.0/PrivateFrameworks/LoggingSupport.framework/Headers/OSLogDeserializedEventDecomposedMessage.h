// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSLOGDESERIALIZEDEVENTDECOMPOSEDMESSAGE_H
#define OSLOGDESERIALIZEDEVENTDECOMPOSEDMESSAGE_H

@class NSDictionary, NSArray;


#import "OSLogEventDecomposedMessage.h"

@interface OSLogDeserializedEventDecomposedMessage : OSLogEventDecomposedMessage

@property (readonly, nonatomic) NSDictionary *backingDict; // ivar: _backingDict
@property (readonly, nonatomic) NSArray *segments; // ivar: _segments


-(NSUInteger)placeholderCount;
-(NSUInteger)state;
-(id)argumentAtIndex:(NSUInteger)arg0 ;
-(id)initWithDict:(id)arg0 metadata:(id)arg1 ;
-(id)literalPrefixAtIndex:(NSUInteger)arg0 ;
-(id)placeholderAtIndex:(NSUInteger)arg0 ;


@end


#endif