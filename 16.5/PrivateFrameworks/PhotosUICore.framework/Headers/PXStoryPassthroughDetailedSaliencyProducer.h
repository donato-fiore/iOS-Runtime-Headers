// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYPASSTHROUGHDETAILEDSALIENCYPRODUCER_H
#define PXSTORYPASSTHROUGHDETAILEDSALIENCYPRODUCER_H

@protocol PXStoryDetailedSaliencyProducer, PXStorySaliencyDataSource;

#import <Foundation/Foundation.h>


@interface PXStoryPassthroughDetailedSaliencyProducer : NSObject <PXStoryDetailedSaliencyProducer>



@property (readonly, nonatomic) NSObject<PXStorySaliencyDataSource> *detailedSaliency; // ivar: _detailedSaliency


-(id)init;
-(id)initWithDetailedSaliency:(id)arg0 ;
-(id)requestDetailedSaliencyForDisplayAssets:(id)arg0 options:(NSUInteger)arg1 resultHandler:(id)arg2 ;


@end


#endif