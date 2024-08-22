// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKFCKACCESSORY_H
#define MKFCKACCESSORY_H

@class NSDictionary, NSSet, NSString, NSUUID, NSNumber, NSData, NSDate;


#import "MKFCKHomeObject.h"
#import "MKFCKHome.h"
#import "MKFCKAccessory.h"
#import "MKFCKRoom.h"

@interface MKFCKAccessory : MKFCKHomeObject

@property (retain, nonatomic) NSDictionary *applicationData;
@property (retain, nonatomic) NSSet *automations;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSUUID *conflictResolutionUUID;
@property (retain, nonatomic) MKFCKHome *home;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (retain, nonatomic) MKFCKAccessory *hostAccessory;
@property (retain, nonatomic) NSSet *hostedAccessories;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSNumber *initialCategory;
@property (copy, nonatomic) NSString *initialManufacturer;
@property (copy, nonatomic) NSString *initialModel;
@property (nonatomic) BOOL isHosted;
@property (copy, nonatomic) NSUUID *modelID;
@property (nonatomic) NSInteger networkClientIdentifier;
@property (nonatomic) NSInteger networkClientLAN;
@property (copy, nonatomic) NSUUID *networkRouterUUID;
@property (copy, nonatomic) NSString *productData;
@property (retain, nonatomic) MKFCKRoom *room;
@property (retain, nonatomic) NSSet *scenes;
@property (copy, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSData *wiFiUniquePreSharedKey;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;


+(id)fetchRequest;
-(BOOL)exportFromLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)importIntoLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)isReadyToImportIntoLocalModelWithContext:(id)arg0 ;


@end


#endif