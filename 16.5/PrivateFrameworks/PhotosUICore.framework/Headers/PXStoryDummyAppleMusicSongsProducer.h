// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYDUMMYAPPLEMUSICSONGSPRODUCER_H
#define PXSTORYDUMMYAPPLEMUSICSONGSPRODUCER_H

@class NSArray;
@protocol PXStorySongsProducer, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXStoryDummyAppleMusicSongsProducer : NSObject <PXStorySongsProducer>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_queue_assets;
}


@property (nonatomic) NSUInteger logContext; // ivar: logContext


-(id)init;
-(id)requestSongsWithOptions:(NSUInteger)arg0 resultHandler:(id)arg1 ;
-(void)_queue_requestSongsWithOptions:(NSUInteger)arg0 resultHandler:(id)arg1 ;


@end


#endif