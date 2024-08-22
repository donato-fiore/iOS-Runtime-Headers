// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPSNAPPYREADCHANNEL_H
#define TSPSNAPPYREADCHANNEL_H

@class NSString;
@protocol TSUStreamReadChannel;

#import <Foundation/Foundation.h>


@interface TSPSnappyReadChannel : NSObject <TSUStreamReadChannel>

 {
    id<TSUStreamReadChannel> *_readChannel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)processData:(*id)arg0 isDone:(BOOL)arg1 handler:(id)arg2 ;
-(id)initWithReadChannel:(id)arg0 ;
-(id)uncompressData:(id)arg0 ;
-(id)uncompressDataFromSource:(struct SnappySource *)arg0 ;
-(void)close;
-(void)dealloc;
-(void)readWithHandler:(id)arg0 ;
-(void)readWithHandlerAndWait:(id)arg0 ;


@end


#endif