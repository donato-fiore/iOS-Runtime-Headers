// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCPMOVIE_H
#define RCPMOVIE_H

@class AVAsset, UIImage, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RCPEventStream.h"

@interface RCPMovie : NSObject {
    NSObject<OS_dispatch_queue> *_serializationQueue;
}


@property (readonly, nonatomic) NSUInteger endTimestamp; // ivar: _endTimestamp
@property (retain, nonatomic) RCPEventStream *eventStream; // ivar: _eventStream
@property (nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (retain, nonatomic) AVAsset *screenRecording; // ivar: _screenRecording
@property (retain, nonatomic) UIImage *screenshot; // ivar: _screenshot
@property (retain, nonatomic) NSArray *snapshots; // ivar: _snapshots
@property (readonly, nonatomic) NSUInteger startTimestamp; // ivar: _startTimestamp


+(struct __CVBuffer *)pixelBufferFromUIImage:(id)arg0 size:(struct CGSize )arg1 orientation:(NSInteger)arg2 ;
-(id)encodeToXPC;
-(id)initWithContentsOfURL:(id)arg0 ;
-(id)initWithEventStream:(id)arg0 snapshots:(id)arg1 ;
-(id)initWithXPC:(id)arg0 ;
-(id)trimmedFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(void)writeToURL:(id)arg0 completion:(id)arg1 ;


@end


#endif