// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRGENERICMESSAGE_H
#define MRGENERICMESSAGE_H

@class NSData, NSString;


#import "MRProtocolMessage.h"

@interface MRGenericMessage : MRProtocolMessage

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *key;


-(NSUInteger)type;
-(id)initWithKey:(id)arg0 data:(id)arg1 ;


@end


#endif