// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASPROXIMITYBACKUPACTION_H
#define SASPROXIMITYBACKUPACTION_H

@class NSDate, NSError;


#import "SASProximityAction.h"

@interface SASProximityBackupAction : SASProximityAction

@property (retain) NSDate *completionDate; // ivar: _completionDate
@property (retain) NSError *error; // ivar: _error
@property BOOL finishedBackup; // ivar: _finishedBackup
@property CGFloat percentComplete; // ivar: _percentComplete
@property BOOL shouldStartBackup; // ivar: _shouldStartBackup
@property NSUInteger timeRemaining; // ivar: _timeRemaining


+(NSUInteger)actionID;
+(id)actionFromDictionary:(id)arg0 ;
-(id)requestPayload;


@end


#endif