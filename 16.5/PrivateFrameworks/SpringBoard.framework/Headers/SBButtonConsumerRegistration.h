// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBBUTTONCONSUMERREGISTRATION_H
#define SBBUTTONCONSUMERREGISTRATION_H


#import <Foundation/Foundation.h>

#import "SBButtonConsumerClient.h"

@interface SBButtonConsumerRegistration : NSObject

@property (nonatomic) NSInteger buttonKind; // ivar: _buttonKind
@property (weak, nonatomic) SBButtonConsumerClient *client; // ivar: _client
@property (nonatomic) NSUInteger eventMask; // ivar: _eventMask
@property (nonatomic) NSInteger eventPriority; // ivar: _eventPriority


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif