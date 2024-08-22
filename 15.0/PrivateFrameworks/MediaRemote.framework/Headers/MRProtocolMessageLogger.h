// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRPROTOCOLMESSAGELOGGER_H
#define MRPROTOCOLMESSAGELOGGER_H


#import <Foundation/Foundation.h>


@interface MRProtocolMessageLogger : NSObject

@property (nonatomic) BOOL shouldLog; // ivar: _shouldLog
@property (nonatomic) BOOL shouldVerboselyLog; // ivar: _shouldVerboselyLog


+(id)sharedLogger;
-(id)init;
-(void)logMessage:(id)arg0 client:(id)arg1 protocolMessage:(id)arg2 ;


@end


#endif