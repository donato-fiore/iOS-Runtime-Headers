// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAP2COAPIOCONSUMERWEAKHOLDER_H
#define HAP2COAPIOCONSUMERWEAKHOLDER_H

@protocol HAP2CoAPIOConsumer;

#import <Foundation/Foundation.h>


@interface HAP2CoAPIOConsumerWeakHolder : NSObject

@property (readonly, weak, nonatomic) NSObject<HAP2CoAPIOConsumer> *consumer; // ivar: _consumer


+(id)new;
-(id)init;
-(id)initWithConsumer:(id)arg0 ;


@end


#endif