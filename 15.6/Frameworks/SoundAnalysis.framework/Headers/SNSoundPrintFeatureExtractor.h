// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNSOUNDPRINTFEATUREEXTRACTOR_H
#define SNSOUNDPRINTFEATUREEXTRACTOR_H

@class NSString;
@protocol SNProcessing;

#import <Foundation/Foundation.h>

#import "SNSystemConfiguration.h"
#import "SNSoundPrintFeatureExtractorConfiguration.h"

@interface SNSoundPrintFeatureExtractor : NSObject <SNProcessing>

 {
    shared_ptr<DSPGraph::Graph> _graph;
    SNSystemConfiguration *_systemConfiguration;
    SNSoundPrintFeatureExtractorConfiguration *_configuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) shared_ptr<DSPGraph::Graph> graph;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)adaptToSystemConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif