// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRINAMESPACERESOLVERGUARDEDDATA_H
#define TRINAMESPACERESOLVERGUARDEDDATA_H

@class NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TRINamespaceResolverGuardedData : NSObject {
    NSDictionary *plplist;
    NSMutableDictionary *targetedRolloutDeploymentMap;
    NSMutableDictionary *targetedExperimentDeploymentMap;
    BOOL hasIssuedWarnings;
}






@end


#endif