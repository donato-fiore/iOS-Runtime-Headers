// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSPSLEEPSTOREEXPORTEDOBJECT_H
#define HKSPSLEEPSTOREEXPORTEDOBJECT_H

@protocol HKSPSleepClient;

#import <Foundation/Foundation.h>

#import "HKSPSleepStore.h"

@interface HKSPSleepStoreExportedObject : NSObject <HKSPSleepClient>



@property (weak, nonatomic) HKSPSleepStore *sleepStore; // ivar: _sleepStore


-(void)clientShouldCheckInWithCompletion:(id)arg0 ;
-(void)getClientIdentifierWithCompletion:(id)arg0 ;
-(void)sleepEventOccurred:(id)arg0 ;
-(void)sleepEventRecordChanged:(id)arg0 ;
-(void)sleepModeChanged:(id)arg0 ;
-(void)sleepScheduleChanged:(id)arg0 ;
-(void)sleepScheduleStateChanged:(id)arg0 ;
-(void)sleepSettingsChanged:(id)arg0 ;


@end


#endif