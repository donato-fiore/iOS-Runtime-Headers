// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFHOMEWORKFLOW_H
#define WFHOMEWORKFLOW_H

@class HFTriggerActionsSetsUISummary, NSData, NSUUID, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "WFWorkflow.h"

@interface WFHomeWorkflow : NSObject {
    WFWorkflow *_cachedWorkflow;
}


@property (retain, nonatomic) HFTriggerActionsSetsUISummary *actionSetsSummary; // ivar: _actionSetsSummary
@property (readonly, copy, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSUUID *homeIdentifier; // ivar: _homeIdentifier
@property (readonly, nonatomic) BOOL requiresDeviceUnlock;
@property (readonly, nonatomic) BOOL requiresDeviceUnlockEnsuringHomesAreLoaded;
@property (readonly, nonatomic) NSArray *shortcutsDictionaryRepresentations; // ivar: _shortcutsDictionaryRepresentations
@property (readonly, copy, nonatomic) NSArray *summaryIconDescriptors;
@property (readonly, copy, nonatomic) NSArray *summaryIconNames;
@property (readonly, copy, nonatomic) NSString *summaryString;


+(void)setCachedHomes:(id)arg0 ;
-(id)actionSetsFromTriggerActionSetsBuilders:(id)arg0 ;
-(id)debugDescription;
-(id)initWithData:(id)arg0 ;
-(id)triggerActionSetsBuilders;
-(id)workflowWithEnvironment:(NSInteger)arg0 error:(*id)arg1 ;


@end


#endif