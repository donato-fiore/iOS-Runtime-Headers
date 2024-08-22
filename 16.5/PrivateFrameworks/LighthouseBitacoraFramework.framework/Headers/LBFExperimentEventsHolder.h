// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LBFEXPERIMENTEVENTSHOLDER_H
#define LBFEXPERIMENTEVENTSHOLDER_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface LBFExperimentEventsHolder : NSObject

@property (readonly, retain, nonatomic) NSMutableDictionary *deploymentEventsHolders; // ivar: _deploymentEventsHolders
@property (readonly, nonatomic) NSString *experimentOrTaskId; // ivar: _experimentOrTaskId


-(BOOL)dumpFetchedEvents;
-(id)ensureDeploymentEventsHolder:(id)arg0 ;
-(id)fetchedEventsInDictionaries;
-(id)initWithExperimentOrTaskId:(id)arg0 ;


@end


#endif