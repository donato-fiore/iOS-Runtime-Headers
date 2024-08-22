// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYPASSTHROUGHSONGSPRODUCER_H
#define PXSTORYPASSTHROUGHSONGSPRODUCER_H

@protocol PXStorySongsProducer, PXAudioAssetFetchResult;

#import <Foundation/Foundation.h>


@interface PXStoryPassthroughSongsProducer : NSObject <PXStorySongsProducer>



@property (nonatomic) NSUInteger logContext; // ivar: logContext
@property (readonly, nonatomic) NSObject<PXAudioAssetFetchResult> *songs; // ivar: _songs


-(id)init;
-(id)initWithSongs:(id)arg0 ;
-(id)requestSongsWithOptions:(NSUInteger)arg0 resultHandler:(id)arg1 ;


@end


#endif