// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDTIMEBASEDFLAGSMANAGER_H
#define HMDTIMEBASEDFLAGSMANAGER_H

@class HMFObject, NSString, NSMutableDictionary;
@protocol HMDTimeBasedFlagContext, HMDTimeBasedFlagsStoring, OS_dispatch_queue;


#import "HMDMetricsDateProvider.h"

@interface HMDTimeBasedFlagsManager : HMFObject <HMDTimeBasedFlagContext>

 {
    os_unfair_lock_s _lock;
}


@property (retain) HMDMetricsDateProvider *dateProvider; // ivar: _dateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *flags; // ivar: _flags
@property (readonly) NSObject<HMDTimeBasedFlagsStoring> *flagsStorage; // ivar: _flagsStorage
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)_fetchAllFlags;
-(id)flagForName:(id)arg0 homeUUID:(id)arg1 periodicity:(NSInteger)arg2 ;
-(id)flagForName:(id)arg0 periodicity:(NSInteger)arg1 ;
-(id)flagForSpecifier:(id)arg0 periodicity:(NSInteger)arg1 ;
-(id)initWithDateProvider:(id)arg0 ;
-(id)initWithStorage:(id)arg0 dateProvider:(id)arg1 ;
-(id)newFlagForPeriodicity:(NSInteger)arg0 ;
-(id)unarchiveFlags;
-(id)unarchiveLegacyFlags;
-(void)_save;
-(void)flagChanged;
-(void)forceSave;


@end


#endif