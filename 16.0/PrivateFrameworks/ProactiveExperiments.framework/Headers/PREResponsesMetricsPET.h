// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRERESPONSESMETRICSPET_H
#define PRERESPONSESMETRICSPET_H

@class PETEventTracker2, NSString;
@protocol PREResponsesMetricsProtocol, PREExperimentResolverProtocol;

#import <Foundation/Foundation.h>


@interface PREResponsesMetricsPET : NSObject <PREResponsesMetricsProtocol>

 {
    PETEventTracker2 *_tracker;
    id<PREExperimentResolverProtocol> *_resolver;
    BOOL _isApricotDevice;
    NSString *_processName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isApricotDevice;
-(id)_responseListFromGeneratedEvent:(id)arg0 ;
-(id)init;
-(id)initWithExperimentResolver:(id)arg0 ;
-(id)initWithTracker:(id)arg0 experimentResolver:(id)arg1 ;
-(id)tracker;
-(void)registerResponseTapped:(id)arg0 ;
-(void)registerResponseViewed:(id)arg0 ;
-(void)registerResponsesGenerated:(id)arg0 ;


@end


#endif