// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFDADELIVERYCONSUMER_H
#define MFDADELIVERYCONSUMER_H

@protocol DAMessageSendConsumer;


#import "MFDAMailAccountConsumer.h"
#import "MFError.h"

@interface MFDADeliveryConsumer : MFDAMailAccountConsumer <DAMessageSendConsumer>



@property (readonly, nonatomic) NSUInteger bytesRead; // ivar: _bytesRead
@property (readonly, nonatomic) NSUInteger bytesWritten; // ivar: _bytesWritten
@property (retain, nonatomic) MFError *error; // ivar: _error
@property (readonly, nonatomic) NSInteger status; // ivar: _status


-(void)actionFailed:(NSInteger)arg0 forTask:(id)arg1 error:(id)arg2 ;
-(void)messageDidSendWithContext:(id)arg0 sentBytesCount:(NSUInteger)arg1 receivedBytesCount:(NSUInteger)arg2 ;


@end


#endif