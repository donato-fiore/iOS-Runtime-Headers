// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACHBACKCOMPATREMOTEACHIEVEMENTAVAILABILITYKEYWRITER_H
#define ACHBACKCOMPATREMOTEACHIEVEMENTAVAILABILITYKEYWRITER_H

@class HDProfile;

#import <Foundation/Foundation.h>


@interface ACHBackCompatRemoteAchievementAvailabilityKeyWriter : NSObject

@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile


-(BOOL)markTemplateAvailable:(id)arg0 error:(*id)arg1 ;
-(id)companionAvailabilityStateKeyFromUniqueName:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;


@end


#endif