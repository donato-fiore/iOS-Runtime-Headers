// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCAMERASIGNIFICANTEVENTCONFIGURATION_H
#define HFCAMERASIGNIFICANTEVENTCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HFCameraSignificantEventConfiguration : NSObject <NSCopying>



@property (nonatomic) NSUInteger eventTypes; // ivar: _eventTypes
@property (readonly, nonatomic) BOOL isFaceDetectionConfiguration;
@property (nonatomic) NSUInteger personFamiliarityOptions; // ivar: _personFamiliarityOptions


// +(id)_configurationForCameraProfiles:(id)arg0 eventTypesTransform:(id)arg1 personFamiliarityOptionsTransform:(unk)arg2  ;
+(id)configurationForCameraProfilesNotificationSettings:(id)arg0 ;
+(id)configurationForCameraProfilesRecordingSettings:(id)arg0 ;
+(id)configurationWithEventTypes:(NSUInteger)arg0 personFamiliarityOptions:(NSUInteger)arg1 ;
+(id)defaultAnyMotionConfiguration;
+(id)defaultSmartMotionConfiguration;
-(BOOL)containsConfiguration:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)localizedDescription;
-(id)predicateRepresentation;
-(void)addConfiguration:(id)arg0 ;
-(void)removeConfiguration:(id)arg0 ;


@end


#endif