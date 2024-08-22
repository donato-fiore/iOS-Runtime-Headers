// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFCAMERAREACHABILITYBULLETINREGISTRATION_H
#define _MKFCAMERAREACHABILITYBULLETINREGISTRATION_H

@class MKFBulletinRegistration, NSArray, NSString, NSUUID, NSDate;
@protocol MKFCameraReachabilityBulletinRegistration, MKFCameraReachabilityBulletinRegistrationPrivateExtensions, MKFAccessory, MKFDevice;


#import "_MKFAccessory.h"
#import "MKFCameraReachabilityBulletinRegistrationDatabaseID.h"

@interface _MKFCameraReachabilityBulletinRegistration : MKFBulletinRegistration <MKFCameraReachabilityBulletinRegistration, MKFCameraReachabilityBulletinRegistrationPrivateExtensions>



@property (retain, nonatomic) _MKFAccessory *accessory;
@property (retain, nonatomic) NSObject<MKFAccessory> *accessory;
@property (readonly, retain, nonatomic) NSArray *conditions;
@property (readonly, copy, nonatomic) MKFCameraReachabilityBulletinRegistrationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) NSObject<MKFDevice> *device;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfCameraReachabilityBulletinRegistration;


@end


#endif