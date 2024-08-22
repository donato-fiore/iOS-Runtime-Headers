// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFRESIDENT_H
#define _MKFRESIDENT_H

@class MKFModel, NSString, NSUUID, NSNumber, NSData, NSDate;
@protocol MKFResident, MKFResidentPrivateExtensions, MKFAppleMediaAccessory, MKFDevice, MKFHome;


#import "_MKFAppleMediaAccessory.h"
#import "MKFResidentDatabaseID.h"
#import "_MKFDevice.h"
#import "_MKFHome.h"

@interface _MKFResident : MKFModel <MKFResident, MKFResidentPrivateExtensions>



@property (retain, nonatomic) _MKFAppleMediaAccessory *appleMediaAccessory;
@property (retain, nonatomic) NSObject<MKFAppleMediaAccessory> *appleMediaAccessory;
@property (readonly, copy, nonatomic) MKFResidentDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _MKFDevice *device;
@property (retain, nonatomic) NSObject<MKFDevice> *device;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _MKFHome *home;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (copy, nonatomic) NSString *idsDestination;
@property (copy, nonatomic) NSString *idsDestination;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (copy, nonatomic) NSUUID *modelID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *reachable;
@property (copy, nonatomic) NSNumber *reachable;
@property (retain, nonatomic) NSData *residentCapabilities;
@property (retain, nonatomic) NSData *residentCapabilities;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfResident;


@end


#endif