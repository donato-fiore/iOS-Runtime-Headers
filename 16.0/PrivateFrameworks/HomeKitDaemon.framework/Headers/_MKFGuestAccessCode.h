// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFGUESTACCESSCODE_H
#define _MKFGUESTACCESSCODE_H

@class MKFHomeAccessCode, NSString, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFGuestAccessCode, MKFGuestAccessCodePrivateExtensions, MKFHome;


#import "MKFGuestAccessCodeDatabaseID.h"
#import "_MKFHome.h"

@interface _MKFGuestAccessCode : MKFHomeAccessCode <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFGuestAccessCode, MKFGuestAccessCodePrivateExtensions>



@property (copy, nonatomic) NSString *accessCode;
@property (readonly, copy, nonatomic) MKFGuestAccessCodeDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSUUID *hh2ModelID;
@property (copy, nonatomic) NSUUID *hh2ModelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (retain, nonatomic) _MKFHome *home;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
-(id)castIfGuestAccessCode;


@end


#endif