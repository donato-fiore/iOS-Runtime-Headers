// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYDEFAULTAUTOEDITDECISIONLISTSPRODUCERFACTORY_H
#define PXSTORYDEFAULTAUTOEDITDECISIONLISTSPRODUCERFACTORY_H

@class PFStoryAutoEditConfiguration;
@protocol PXStoryAutoEditDecisionListsProducerFactory;

#import <Foundation/Foundation.h>


@interface PXStoryDefaultAutoEditDecisionListsProducerFactory : NSObject <PXStoryAutoEditDecisionListsProducerFactory>

 {
    PFStoryAutoEditConfiguration *_configuration;
}




-(id)autoEditDecisionListsProducerForAssetCollection:(id)arg0 displayAssets:(id)arg1 movieHighlights:(id)arg2 targetOverallDurationInfo:(struct ? )arg3 ;
-(id)fallbackAutoEditDecisionListsProducer;
-(id)init;


@end


#endif