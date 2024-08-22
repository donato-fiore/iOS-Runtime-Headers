// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWMESSAGECONNECTION_H
#define NWMESSAGECONNECTION_H



#import "NWConnection.h"

@interface NWMessageConnection : NWConnection



-(void)readMessageWithCompletionHandler:(id)arg0 ;
-(void)writeMessage:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif