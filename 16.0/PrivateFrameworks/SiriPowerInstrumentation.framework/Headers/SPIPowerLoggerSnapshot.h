// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPIPOWERLOGGERSNAPSHOT_H
#define SPIPOWERLOGGERSNAPSHOT_H


#import <Foundation/Foundation.h>

#import "SPIPowerLogger.h"

@interface SPIPowerLoggerSnapshot : NSObject

@property (readonly, nonatomic) NSUInteger captureTimestamp; // ivar: _captureTimestamp
@property (readonly, nonatomic) SPIPowerLogger *powerLogger; // ivar: _powerLogger
@property (readonly, nonatomic) SPIResourceUsage usage; // ivar: _usage


-(id)init;
-(id)initWithPowerLogger:(id)arg0 usage:(struct SPIResourceUsage )arg1 captureTimestamp:(NSUInteger)arg2 ;
-(void)buildAndEmitWithMessageBuilder:(id)arg0 eventContext:(id)arg1 ;
-(void)logWithEventContext:(id)arg0 ;
-(void)logWithEventContext:(id)arg0 asrIdentifier:(id)arg1 ;
-(void)logWithEventContext:(id)arg0 componentName:(int)arg1 identifier:(id)arg2 ;
-(void)logWithEventContext:(id)arg0 requestIdentifier:(id)arg1 ;
-(void)logWithEventContext:(id)arg0 ttsIdentifier:(id)arg1 ;
-(void)logWithEventContext:(id)arg0 turnIdentifier:(id)arg1 ;


@end


#endif