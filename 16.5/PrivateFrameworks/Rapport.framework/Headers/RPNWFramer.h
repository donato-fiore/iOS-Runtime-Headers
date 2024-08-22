// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPNWFRAMER_H
#define RPNWFRAMER_H


#import <Foundation/Foundation.h>


@interface RPNWFramer : NSObject



+(BOOL)writeControlOnFramer:(id)arg0 type:(int)arg1 error:(unsigned char)arg2 ;
+(BOOL)writeDataOnFramer:(id)arg0 data:(id)arg1 ;
+(char *)controlCodeToString:(int)arg0 ;
// +(void)setupDaemonFramer:(id)arg0 receiveHandler:(id)arg1 closeHandler:(unk)arg2  ;
+(void)startConnection:(id)arg0 ;
+(void)writeErrorOnFramer:(id)arg0 error:(unsigned char)arg1 ;


@end


#endif