// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXCANDIDATERELEVANCEMODELGLOBALS_H
#define ATXCANDIDATERELEVANCEMODELGLOBALS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXCandidateRelevanceModelGlobals : NSObject {
    NSDictionary *_parameters;
}




+(id)sharedInstance;
-(BOOL)isPipelineEnabled;
-(id)init;
-(int)maxCategoricalFeaturesCount;


@end


#endif