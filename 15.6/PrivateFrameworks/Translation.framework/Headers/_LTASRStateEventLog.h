// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LTASRSTATEEVENTLOG_H
#define _LTASRSTATEEVENTLOG_H


#import <Foundation/Foundation.h>


@interface _LTASRStateEventLog : NSObject

@property (readonly) NSInteger state; // ivar: _state


+(void)logFinalPacketReceived:(id)arg0 ;
+(void)logFinalPacketSent:(id)arg0 ;
+(void)logFirstPacketDisplayed:(id)arg0 ;
+(void)logFirstPacketReceived:(id)arg0 ;
+(void)logFirstPacketSent:(id)arg0 ;
-(id)init;
-(id)mtSELFLog;
-(void)emitWithState:(NSInteger)arg0 uuid:(id)arg1 ;


@end


#endif