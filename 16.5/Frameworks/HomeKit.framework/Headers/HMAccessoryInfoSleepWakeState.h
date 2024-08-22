// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYINFOSLEEPWAKESTATE_H
#define HMACCESSORYINFOSLEEPWAKESTATE_H


#import <Foundation/Foundation.h>


@interface HMAccessoryInfoSleepWakeState : NSObject

@property (readonly) NSUInteger sleepWakeState; // ivar: _sleepWakeState


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithProtoPayload:(id)arg0 ;
-(id)initWithSleepWakeState:(NSUInteger)arg0 ;
-(id)protoData;
-(id)protoPayload;


@end


#endif