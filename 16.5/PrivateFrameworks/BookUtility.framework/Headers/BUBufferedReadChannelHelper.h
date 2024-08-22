// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BUBUFFEREDREADCHANNELHELPER_H
#define BUBUFFEREDREADCHANNELHELPER_H

@class NSString;
@protocol BUStreamReadChannel;

#import <Foundation/Foundation.h>

#import "BUBufferedReadChannel.h"

@interface BUBufferedReadChannelHelper : NSObject <BUStreamReadChannel>



@property (weak, nonatomic) BUBufferedReadChannel *bufferedReadChannel; // ivar: _bufferedReadChannel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithBufferedReadChannel:(id)arg0 ;
-(void)close;
-(void)readWithHandler:(id)arg0 ;


@end


#endif