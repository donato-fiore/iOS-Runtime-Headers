// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDEVENTFLAGSPERSISTENTSTORE_H
#define HMDEVENTFLAGSPERSISTENTSTORE_H

@class HMFObject, NSString;
@protocol HMDEventFlagsStoring;



@interface HMDEventFlagsPersistentStore : HMFObject <HMDEventFlagsStoring>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *eventFlagsStoreKey; // ivar: _eventFlagsStoreKey
@property (readonly, nonatomic) NSString *eventFlagsStorePath; // ivar: _eventFlagsStorePath
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDataStorePath:(id)arg0 dataStoreKey:(id)arg1 ;
-(id)lastSaveTime;
-(id)unarchiveEventFlagsPeriods;
-(id)unarchiveEventFlagsValues;
-(void)archiveEventFlagsValues:(id)arg0 withDefinedEventFlagPeriods:(id)arg1 ;


@end


#endif