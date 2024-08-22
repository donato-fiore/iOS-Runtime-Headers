// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWDATAGRAMCONNECTION_H
#define NWDATAGRAMCONNECTION_H



#import "NWConnection.h"

@interface NWDatagramConnection : NWConnection



+(id)connectionWithConnectedSocket:(int)arg0 ;
-(BOOL)readDatagramsWithMinimumCount:(NSUInteger)arg0 maximumCount:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(BOOL)writeDatagrams:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif