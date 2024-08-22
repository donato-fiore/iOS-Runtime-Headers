// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFCHARACTERISTICWRITEACTION_H
#define _MKFCHARACTERISTICWRITEACTION_H

@class MKFAction, NSNumber, NSString, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFCharacteristicWriteAction, MKFCharacteristicWriteActionPrivateExtensions, MKFHAPAccessory, MKFActionSet, MKFHome, MKFService;

#import <Foundation/Foundation.h>

#import "_MKFHAPAccessory.h"
#import "MKFCharacteristicWriteActionDatabaseID.h"
#import "_MKFService.h"

@interface _MKFCharacteristicWriteAction : MKFAction <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFCharacteristicWriteAction, MKFCharacteristicWriteActionPrivateExtensions>



@property (retain, nonatomic) _MKFHAPAccessory *accessory;
@property (retain, nonatomic) NSObject<MKFHAPAccessory> *accessory;
@property (readonly, retain, nonatomic) NSObject<MKFActionSet> *actionSet;
@property (copy, nonatomic) NSNumber *characteristicID;
@property (copy, nonatomic) NSNumber *characteristicID;
@property (readonly, copy, nonatomic) MKFCharacteristicWriteActionDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) _MKFService *service;
@property (retain, nonatomic) NSObject<MKFService> *service;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject *targetValue;
@property (retain, nonatomic) NSObject *targetValue;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(BOOL)validateTargetValue:(*id)arg0 error:(*id)arg1 ;
-(id)castIfCharacteristicWriteAction;
-(void)willSave;


@end


#endif