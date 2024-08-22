// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWSTREAMCONNECTION_H
#define NWSTREAMCONNECTION_H



#import "NWConnection.h"

@interface NWStreamConnection : NWConnection



+(id)connectionWithConnectedSocket:(int)arg0 ;
-(BOOL)readDataWithMinimumLength:(NSUInteger)arg0 maximumLength:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(BOOL)writeCloseWithCompletionHandler:(id)arg0 ;
-(BOOL)writeData:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif