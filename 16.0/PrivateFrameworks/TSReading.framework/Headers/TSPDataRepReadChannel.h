// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPDATAREPREADCHANNEL_H
#define TSPDATAREPREADCHANNEL_H

@class SFUDataRepresentation, NSString;
@protocol TSUStreamReadChannel, SFUInputStream, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSPDataRepReadChannel : NSObject <TSUStreamReadChannel>

 {
    SFUDataRepresentation *_representation;
    id<SFUInputStream> *_inputStream;
    NSObject<OS_dispatch_queue> *_readQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithRepresentation:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)readWithQueue:(id)arg0 handler:(id)arg1 ;


@end


#endif