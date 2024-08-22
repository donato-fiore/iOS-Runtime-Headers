// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDATABASECORRUPTIONEVENTSTORE_H
#define HDDATABASECORRUPTIONEVENTSTORE_H

@protocol HDDatabaseCorruptionEventStoreDelegate;

#import <Foundation/Foundation.h>


@interface HDDatabaseCorruptionEventStore : NSObject

@property (weak, nonatomic) NSObject<HDDatabaseCorruptionEventStoreDelegate> *delegate; // ivar: _delegate


+(id)TTREventKeyForProfileIdentifier:(id)arg0 component:(NSInteger)arg1 ;
+(id)corruptionEventKeyForProfileIdentifier:(id)arg0 component:(NSInteger)arg1 ;
+(id)outOfSpaceEventKey;
-(id)dateOfMostRecentDeviceOutOfSpaceEvent;
-(id)dateOfMostRecentObliteration:(*id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)mostRecentCorruptionEventForProfileIdentifier:(id)arg0 component:(NSInteger)arg1 ;
-(id)mostRecentMigrationFailureEventForProfile:(id)arg0 component:(NSInteger)arg1 schemaVersion:(*NSInteger)arg2 ;
-(id)mostRecentTTRAttemptForProfileIdentifier:(id)arg0 component:(NSInteger)arg1 ;
-(void)persistCorruptionEvent:(id)arg0 ;
-(void)persistDeviceOutOfSpaceEvent;
-(void)persistMigrationFailureEventForProfile:(id)arg0 component:(NSInteger)arg1 schemaVersion:(NSInteger)arg2 ;
-(void)persistObliterationForReason:(id)arg0 ;
-(void)persistTTRAttempt:(id)arg0 forProfileIdentifier:(id)arg1 component:(NSInteger)arg2 ;


@end


#endif