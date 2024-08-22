// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSASDAEMONMODEL_H
#define MSASDAEMONMODEL_H



#import "MSASModelBase.h"

@interface MSASDaemonModel : MSASModelBase



+(id)defaultModel;
-(BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg0 currentVersion:(int)arg1 ;
-(id)earliestNextActivityDate;
-(id)init;
-(id)nextActivityDateByPersonID;
-(void)clearAllNextActivityDates;
-(void)setNextActivityDate:(id)arg0 forPersonID:(id)arg1 ;


@end


#endif