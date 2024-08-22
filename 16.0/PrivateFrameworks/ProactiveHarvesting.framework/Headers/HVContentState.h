// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HVCONTENTSTATE_H
#define HVCONTENTSTATE_H

@class NSSet;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface HVContentState : NSObject <NSCopying, NSMutableCopying>

 {
    NSSet *_consumers;
    unsigned char _levelOfService;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithConsumers:(id)arg0 levelOfService:(unsigned char)arg1 ;
-(id)consumers;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithConsumers:(id)arg0 levelOfService:(unsigned char)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(unsigned char)levelOfService;


@end


#endif