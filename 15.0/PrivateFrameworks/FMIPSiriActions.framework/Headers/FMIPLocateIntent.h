// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMIPLOCATEINTENT_H
#define FMIPLOCATEINTENT_H

@class INIntent, INObject;
@protocol FMIPIdentifiable;



@interface FMIPLocateIntent : INIntent <FMIPIdentifiable>



@property (copy, nonatomic) INObject *deviceId;
@property (copy, nonatomic) INObject *deviceId;
@property (nonatomic) NSInteger locateDeviceClass;


+(NSInteger)locateDeviceClassForDeviceType:(NSInteger)arg0 ;
+(id)identityTag;
+(id)locateIntentWithDeviceId:(id)arg0 deviceType:(NSInteger)arg1 deviceDisplayName:(id)arg2 ;
-(id)rootAggregateKey;


@end


#endif