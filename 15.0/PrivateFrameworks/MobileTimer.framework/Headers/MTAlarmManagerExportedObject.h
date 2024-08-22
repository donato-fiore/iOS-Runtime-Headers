// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTALARMMANAGEREXPORTEDOBJECT_H
#define MTALARMMANAGEREXPORTEDOBJECT_H

@class NSString;
@protocol MTAlarmClient;

#import <Foundation/Foundation.h>

#import "MTAlarmManager.h"

@interface MTAlarmManagerExportedObject : NSObject <MTAlarmClient>



@property (readonly, weak, nonatomic) MTAlarmManager *alarmManager; // ivar: _alarmManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAlarmManager:(id)arg0 ;
-(void)_didReceiveAlarmServerReadyNotification:(id)arg0 ;
-(void)alarmDismissed:(id)arg0 ;
-(void)alarmFired:(id)arg0 ;
-(void)alarmSnoozed:(id)arg0 ;
-(void)alarmsAdded:(id)arg0 ;
-(void)alarmsRemoved:(id)arg0 ;
-(void)alarmsUpdated:(id)arg0 ;
-(void)dealloc;
-(void)nextAlarmChanged:(id)arg0 ;


@end


#endif