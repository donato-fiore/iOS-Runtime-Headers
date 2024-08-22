// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RKCONVERSATION_H
#define RKCONVERSATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface RKConversation : NSObject

@property (readonly, copy) NSArray *messages; // ivar: _messages
@property (readonly) NSUInteger type; // ivar: _type


-(id)initWithString:(NSUInteger)arg0 messages:(id)arg1 ;


@end


#endif