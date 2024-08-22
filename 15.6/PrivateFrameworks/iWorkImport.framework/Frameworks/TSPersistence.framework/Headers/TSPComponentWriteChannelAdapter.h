// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPCOMPONENTWRITECHANNELADAPTER_H
#define TSPCOMPONENTWRITECHANNELADAPTER_H

@class TSUFileIOChannel, NSError, NSString;
@protocol TSPComponentWriteChannel, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSPComponentWriteChannelAdapter : NSObject <TSPComponentWriteChannel>

 {
    NSObject<OS_dispatch_queue> *_queue;
    TSUFileIOChannel *_channel;
    id *_handler;
    NSError *_error;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithChannel:(id)arg0 handler:(id)arg1 ;
-(void)_close;
-(void)close;
-(void)setError:(id)arg0 ;
-(void)writeData:(id)arg0 ;


@end


#endif