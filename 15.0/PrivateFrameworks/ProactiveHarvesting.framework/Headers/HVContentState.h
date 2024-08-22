// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HVCONTENTSTATE_H
#define HVCONTENTSTATE_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface HVContentState : NSObject

@property (readonly, nonatomic) NSMutableSet *consumers; // ivar: _consumers
@property (nonatomic) unsigned char levelOfService; // ivar: _levelOfService


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithConsumers:(id)arg0 levelOfService:(unsigned char)arg1 ;


@end


#endif