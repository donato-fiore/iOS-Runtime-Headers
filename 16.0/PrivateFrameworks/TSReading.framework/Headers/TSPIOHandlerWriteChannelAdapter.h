// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPIOHANDLERWRITECHANNELADAPTER_H
#define TSPIOHANDLERWRITECHANNELADAPTER_H

@class NSError, NSString;
@protocol TSPComponentWriteChannel, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSPIOHandlerWriteChannelAdapter : NSObject <TSPComponentWriteChannel>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id *_handler;
    NSError *_error;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 handler:(id)arg1 ;
-(void)close;
-(void)setError:(id)arg0 ;
-(void)writeData:(id)arg0 ;


@end


#endif