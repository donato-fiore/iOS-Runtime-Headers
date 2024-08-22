// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFANALYSISEVENTBULLETINREGISTRATION_H
#define _MKFANALYSISEVENTBULLETINREGISTRATION_H

@class MKFBulletinRegistration, NSNumber, NSArray, NSString, NSUUID, NSDate;
@protocol MKFAnalysisEventBulletinRegistration, MKFAnalysisEventBulletinRegistrationPrivateExtensions, MKFAccessory, MKFHome, MKFUser;


#import "_MKFAccessory.h"
#import "MKFAnalysisEventBulletinRegistrationDatabaseID.h"

@interface _MKFAnalysisEventBulletinRegistration : MKFBulletinRegistration <MKFAnalysisEventBulletinRegistration, MKFAnalysisEventBulletinRegistrationPrivateExtensions>



@property (retain, nonatomic) _MKFAccessory *accessory;
@property (retain, nonatomic) NSObject<MKFAccessory> *accessory;
@property (copy, nonatomic) NSNumber *classifierOptions;
@property (copy, nonatomic) NSNumber *classifierOptions;
@property (readonly, retain, nonatomic) NSArray *conditions;
@property (readonly, copy, nonatomic) MKFAnalysisEventBulletinRegistrationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceIdsDestination;
@property (copy, nonatomic) NSUUID *deviceIdsIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSObject<MKFUser> *user;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfAnalysisEventBulletinRegistration;


@end


#endif