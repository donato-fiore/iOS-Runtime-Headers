// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LBFDEPLOYMENTEVENTSHOLDER_H
#define LBFDEPLOYMENTEVENTSHOLDER_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface LBFDeploymentEventsHolder : NSObject

@property (readonly, nonatomic) NSString *deploymentId; // ivar: _deploymentId
@property (readonly, nonatomic) NSString *experimentOrTaskId; // ivar: _experimentOrTaskId
@property (readonly, nonatomic) NSMutableArray *lighthousePluginEvents; // ivar: _lighthousePluginEvents
@property (readonly, nonatomic) NSMutableArray *mlruntimedEvents; // ivar: _mlruntimedEvents
@property (readonly, nonatomic) NSMutableArray *trialdEvents; // ivar: _trialdEvents


-(BOOL)appendLighthousePluginEvent:(id)arg0 ;
-(BOOL)appendMlruntimedEvent:(id)arg0 ;
-(BOOL)appendTrialEvent:(id)arg0 ;
-(BOOL)dumpFetchedEvents;
-(id)eventToJSONDictionary:(id)arg0 ;
-(id)eventToJSONString:(id)arg0 ;
-(id)fetchedEventsInDictionaries;
-(id)getSortedEvents;
-(id)initWithExperimentOrTaskId:(id)arg0 deploymentId:(id)arg1 ;


@end


#endif