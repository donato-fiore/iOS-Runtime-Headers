// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFRESIDENT_H
#define _MKFRESIDENT_H

@class MKFModel, NSString, NSUUID, NSNumber, NSDate;
@protocol MKFResident, MKFResidentPrivateExtensions, MKFDevice, MKFHome;


#import "MKFResidentDatabaseID.h"
#import "_MKFDevice.h"
#import "_MKFHome.h"

@interface _MKFResident : MKFModel <MKFResident, MKFResidentPrivateExtensions>



@property (readonly, copy, nonatomic) MKFResidentDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _MKFDevice *device;
@property (retain, nonatomic) NSObject<MKFDevice> *device;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _MKFHome *home;
@property (retain, nonatomic) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *reachable;
@property (copy, nonatomic) NSNumber *reachable;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfResident;


@end


#endif