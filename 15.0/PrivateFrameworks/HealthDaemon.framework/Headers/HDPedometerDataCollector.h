// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDPEDOMETERDATACOLLECTOR_H
#define HDPEDOMETERDATACOLLECTOR_H

@class NSNumber, NSString;
@protocol HDUserCharacteristicsProfileObserver;


#import "HDCoreMotionDataCollector.h"

@interface HDPedometerDataCollector : HDCoreMotionDataCollector <HDUserCharacteristicsProfileObserver>

 {
    NSNumber *_userCondition;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isPedometerDataCollectionSupported;
-(CGFloat)queue_differenceFromDatum:(id)arg0 toDatum:(id)arg1 type:(id)arg2 ;
-(Class)coreMotionDatumClass;
-(id)collectedTypes;
-(id)initWithProfile:(id)arg0 ;
-(id)persistentIdentifier;
-(id)queue_newDataSource;
-(void)dealloc;
-(void)userCharacteristicsManager:(id)arg0 didUpdateUserProfile:(id)arg1 ;


@end


#endif