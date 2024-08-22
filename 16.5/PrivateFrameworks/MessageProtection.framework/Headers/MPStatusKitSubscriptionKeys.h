// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSTATUSKITSUBSCRIPTIONKEYS_H
#define MPSTATUSKITSUBSCRIPTIONKEYS_H

@class NSData;

#import <Foundation/Foundation.h>


@interface MPStatusKitSubscriptionKeys : NSObject

@property (readonly, nonatomic) NSData *chainKey; // ivar: _chainKey
@property (readonly, nonatomic) unsigned short index; // ivar: _index
@property (readonly, nonatomic) NSData *signingKey; // ivar: _signingKey


-(id)initWithIndex:(unsigned short)arg0 chainKey:(id)arg1 signingKey:(id)arg2 ;


@end


#endif