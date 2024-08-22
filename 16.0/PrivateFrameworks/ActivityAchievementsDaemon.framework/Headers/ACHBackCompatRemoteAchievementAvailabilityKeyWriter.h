// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHBACKCOMPATREMOTEACHIEVEMENTAVAILABILITYKEYWRITER_H
#define ACHBACKCOMPATREMOTEACHIEVEMENTAVAILABILITYKEYWRITER_H

@class HKHealthStore, HDProfile;

#import <Foundation/Foundation.h>


@interface ACHBackCompatRemoteAchievementAvailabilityKeyWriter : NSObject

@property (nonatomic) unsigned char creatorDevice; // ivar: _creatorDevice
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile


-(BOOL)markTemplateAvailable:(id)arg0 error:(*id)arg1 ;
-(id)companionAvailabilityStateKeyFromUniqueName:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 creatorDevice:(unsigned char)arg1 ;
-(id)initWithProfile:(id)arg0 creatorDevice:(unsigned char)arg1 ;


@end


#endif