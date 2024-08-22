// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRICKOPERATIONGROUPFACTORY_H
#define TRICKOPERATIONGROUPFACTORY_H


#import <Foundation/Foundation.h>


@interface TRICKOperationGroupFactory : NSObject



+(id)groupForDownloadOptions:(id)arg0 ;
+(id)groupForExperimentId:(id)arg0 ;
+(id)groupForRolloutId:(id)arg0 ;
+(id)groupForScheduledFetch;
+(id)groupForUserInitiatedFetch;


@end


#endif