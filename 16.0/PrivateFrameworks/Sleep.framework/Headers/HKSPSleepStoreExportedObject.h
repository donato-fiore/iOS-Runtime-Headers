// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSPSLEEPSTOREEXPORTEDOBJECT_H
#define HKSPSLEEPSTOREEXPORTEDOBJECT_H

@protocol HKSPSleepClient;

#import <Foundation/Foundation.h>

#import "HKSPSleepStore.h"

@interface HKSPSleepStoreExportedObject : NSObject <HKSPSleepClient>



@property (weak, nonatomic) HKSPSleepStore *sleepStore; // ivar: _sleepStore


-(id)_mergeExternalSleepEventRecordChange:(id)arg0 clientIdentifier:(id)arg1 ;
-(id)_mergeExternalSleepScheduleChange:(id)arg0 clientIdentifier:(id)arg1 ;
-(id)_mergeExternalSleepSettingsChange:(id)arg0 clientIdentifier:(id)arg1 ;
-(void)clientShouldCheckInWithCompletion:(id)arg0 ;
-(void)getClientIdentifierWithCompletion:(id)arg0 ;
-(void)sleepEventOccurred:(id)arg0 ;
-(void)sleepEventRecordChanged:(id)arg0 clientIdentifier:(id)arg1 ;
-(void)sleepModeChanged:(id)arg0 ;
-(void)sleepScheduleChanged:(id)arg0 clientIdentifier:(id)arg1 ;
-(void)sleepScheduleStateChanged:(id)arg0 ;
-(void)sleepSettingsChanged:(id)arg0 clientIdentifier:(id)arg1 ;


@end


#endif