// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMIPPLAYSOUNDINTENT_H
#define FMIPPLAYSOUNDINTENT_H

@class INIntent, INObject;
@protocol FMIPIdentifiable;



@interface FMIPPlaySoundIntent : INIntent <FMIPIdentifiable>



@property (copy, nonatomic) INObject *deviceId;
@property (copy, nonatomic) INObject *deviceId;
@property (nonatomic) NSInteger playSoundDeviceClass;


+(NSInteger)playSoundDeviceClassForDeviceType:(NSInteger)arg0 ;
+(id)identityTag;
+(id)playSoundIntentWithDeviceId:(id)arg0 deviceType:(NSInteger)arg1 deviceDisplayName:(id)arg2 ;
-(id)rootAggregateKey;


@end


#endif