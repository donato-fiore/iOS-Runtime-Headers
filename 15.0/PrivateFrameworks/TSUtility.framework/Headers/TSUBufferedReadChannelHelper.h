// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUBUFFEREDREADCHANNELHELPER_H
#define TSUBUFFEREDREADCHANNELHELPER_H

@class NSString;
@protocol TSUStreamReadChannel;

#import <Foundation/Foundation.h>

#import "TSUBufferedReadChannel.h"

@interface TSUBufferedReadChannelHelper : NSObject <TSUStreamReadChannel>

 {
    TSUBufferedReadChannel *_bufferedReadChannel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithBufferedReadChannel:(id)arg0 ;
-(void)close;
-(void)readWithQueue:(id)arg0 handler:(id)arg1 ;


@end


#endif