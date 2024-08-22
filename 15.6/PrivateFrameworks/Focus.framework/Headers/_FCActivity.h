// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _FCACTIVITY_H
#define _FCACTIVITY_H

@class NSString, NSDate, NSArray, NSURL, NSUUID, DNDMode;
@protocol FCActivityDescribing;

#import <Foundation/Foundation.h>


@interface _FCActivity : NSObject <FCActivityDescribing>



@property (readonly, copy, nonatomic) NSString *activityColorName;
@property (copy, nonatomic, setter=_setActivityCreationDate:) NSDate *activityCreationDate; // ivar: _activityCreationDate
@property (readonly, copy, nonatomic) NSString *activityDisplayName;
@property (readonly, copy, nonatomic) NSString *activityIdentifier;
@property (copy, nonatomic, setter=_setActivityLifetimeDescriptions:) NSArray *activityLifetimeDescriptions; // ivar: _activityLifetimeDescriptions
@property (copy, nonatomic, setter=_setActivityLifetimesAlternativeDescription:) NSString *activityLifetimesAlternativeDescription; // ivar: _activityLifetimesAlternativeDescription
@property (readonly, copy, nonatomic) NSURL *activitySettingsURL;
@property (readonly, copy, nonatomic) NSURL *activitySetupURL;
@property (readonly, copy, nonatomic) NSString *activitySymbolImageName;
@property (readonly, copy, nonatomic) NSUUID *activityUniqueIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, getter=_dndMode, setter=_setDndMode:) DNDMode *dndMode; // ivar: _dndMode
@property (readonly, nonatomic, getter=isDrivingActivity) BOOL drivingActivity;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly, nonatomic, getter=isSleepActivity) BOOL sleepActivity;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDiscreteLifetimes;


-(BOOL)_updateMode:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMode:(id)arg0 ;


@end


#endif