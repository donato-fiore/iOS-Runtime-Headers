// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFAPPLEMEDIAACCESSORYRESIDENT_H
#define _MKFAPPLEMEDIAACCESSORYRESIDENT_H

@class MKFResident, NSString, NSUUID, NSNumber, NSDate;
@protocol MKFAppleMediaAccessoryResident, MKFAppleMediaAccessoryResidentPrivateExtensions, MKFAppleMediaAccessory, MKFDevice, MKFHome;


#import "_MKFAppleMediaAccessory.h"
#import "MKFAppleMediaAccessoryResidentDatabaseID.h"

@interface _MKFAppleMediaAccessoryResident : MKFResident <MKFAppleMediaAccessoryResident, MKFAppleMediaAccessoryResidentPrivateExtensions>



@property (retain, nonatomic) _MKFAppleMediaAccessory *accessory;
@property (retain, nonatomic) NSObject<MKFAppleMediaAccessory> *accessory;
@property (readonly, copy, nonatomic) MKFAppleMediaAccessoryResidentDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<MKFDevice> *device;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *reachable;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
-(id)castIfAppleMediaAccessoryResident;


@end


#endif