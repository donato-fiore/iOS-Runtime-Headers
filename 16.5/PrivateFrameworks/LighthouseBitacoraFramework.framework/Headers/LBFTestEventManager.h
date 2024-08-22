// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LBFTESTEVENTMANAGER_H
#define LBFTESTEVENTMANAGER_H

@class NSString, NSDateFormatter, NSDictionary;

#import <Foundation/Foundation.h>


@interface LBFTestEventManager : NSObject

@property (readonly, nonatomic) NSString *datasetName; // ivar: _datasetName
@property (readonly, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (readonly, nonatomic) NSDictionary *eventStore; // ivar: _eventStore
@property (readonly, nonatomic) NSString *readCategory; // ivar: _readCategory
@property (retain, nonatomic) NSDictionary *syntheticData; // ivar: _syntheticData


+(id)sharedInstance;
-(BOOL)generateEventStore;
-(BOOL)loadSyntheticData:(id)arg0 ;
-(BOOL)loadSyntheticJSON:(id)arg0 datasetName:(id)arg1 ;
-(BOOL)validateOutcomes:(id)arg0 withAggregatedStates:(id)arg1 ;
-(id)ensureBiomeManagerLighthouse;
-(id)ensureBiomeManagerMLRuntimed;
-(id)ensureBiomeManagerTrial;
-(id)generateOutcomeDict;
-(id)init;
-(id)lighthouseEventFromDict:(id)arg0 ;
-(id)mlRuntimedEventFromDict:(id)arg0 ;
-(id)readData:(id)arg0 endDate:(id)arg1 ;
-(id)trialEventFromDict:(id)arg0 ;
-(id)trialIdentifiersFromJSON:(id)arg0 ;


@end


#endif