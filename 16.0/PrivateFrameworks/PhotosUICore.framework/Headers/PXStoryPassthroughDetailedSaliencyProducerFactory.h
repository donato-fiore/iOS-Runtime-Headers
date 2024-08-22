// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYPASSTHROUGHDETAILEDSALIENCYPRODUCERFACTORY_H
#define PXSTORYPASSTHROUGHDETAILEDSALIENCYPRODUCERFACTORY_H

@protocol PXStoryDetailedSaliencyProducerFactory, PXStoryDetailedSaliencyProducer;

#import <Foundation/Foundation.h>


@interface PXStoryPassthroughDetailedSaliencyProducerFactory : NSObject <PXStoryDetailedSaliencyProducerFactory>



@property (retain, nonatomic) NSObject<PXStoryDetailedSaliencyProducer> *detailedSaliencyProducer; // ivar: _detailedSaliencyProducer


-(id)detailedSaliencyProducerForConfiguration:(id)arg0 ;
-(id)init;
-(id)initWithDetailedSaliencyProducer:(id)arg0 ;


@end


#endif