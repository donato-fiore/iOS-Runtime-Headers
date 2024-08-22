// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPASSSYNCSERVICESYNCSTATUS_H
#define NPKPASSSYNCSERVICESYNCSTATUS_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "NPKPassSyncChange.h"

@interface NPKPassSyncServiceSyncStatus : NSObject

@property (retain, nonatomic) NSDate *incomingChangeDate; // ivar: _incomingChangeDate
@property (retain, nonatomic) NPKPassSyncChange *lastKnownIncomingChange; // ivar: _lastKnownIncomingChange
@property (retain, nonatomic) NPKPassSyncChange *lastKnownOutgoingChange; // ivar: _lastKnownOutgoingChange
@property (retain, nonatomic) NSDate *outgoingChangeDate; // ivar: _outgoingChangeDate


-(BOOL)shouldSyncWithCurrentIncomingChange:(id)arg0 currentOutgoingChange:(id)arg1 currentDate:(id)arg2 ;
-(void)reset;


@end


#endif