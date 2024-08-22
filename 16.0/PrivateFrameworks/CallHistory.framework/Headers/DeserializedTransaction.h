// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DESERIALIZEDTRANSACTION_H
#define DESERIALIZEDTRANSACTION_H


#import <Foundation/Foundation.h>

#import "CHRecentCall.h"

@interface DeserializedTransaction : NSObject

@property (readonly, nonatomic) CHRecentCall *call; // ivar: _call
@property NSUInteger type; // ivar: _type


-(id)initWithCall:(id)arg0 andType:(NSUInteger)arg1 ;


@end


#endif