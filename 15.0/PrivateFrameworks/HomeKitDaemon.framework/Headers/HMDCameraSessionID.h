// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERASESSIONID_H
#define HMDCAMERASESSIONID_H

@class HMFObject, NSString, NSMutableDictionary;
@protocol NSCopying;


#import "HMDDevice.h"

@interface HMDCameraSessionID : HMFObject <NSCopying>



@property (readonly) NSString *cameraSessionAppID; // ivar: _cameraSessionAppID
@property (readonly) NSString *descriptionString; // ivar: _descriptionString
@property (readonly) NSMutableDictionary *deviceMilestones; // ivar: _deviceMilestones
@property (readonly) NSString *deviceSectionName; // ivar: _deviceSectionName
@property (readonly) NSMutableDictionary *milestones; // ivar: _milestones
@property (readonly) HMDDevice *remoteDevice; // ivar: _remoteDevice
@property (readonly) NSString *sessionID; // ivar: _sessionID
@property (readonly, getter=isSPIClient) BOOL spiClient; // ivar: _spiClient


+(id)applicationIdentiferForMessage:(id)arg0 ;
+(id)millisecondsSince1970;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSessionID:(id)arg0 remoteDevice:(id)arg1 cameraSessionAppID:(id)arg2 descriptionString:(id)arg3 spiClient:(BOOL)arg4 ;
-(void)_prepareDeviceMilestones;
-(void)addParameterFor:(id)arg0 value:(id)arg1 ;
-(void)markMilestoneFor:(id)arg0 ;
-(void)markMilestoneForPath:(id)arg0 ;
-(void)setParameterFor:(id)arg0 value:(id)arg1 ;
-(void)setParameterForPath:(id)arg0 value:(id)arg1 ;


@end


#endif