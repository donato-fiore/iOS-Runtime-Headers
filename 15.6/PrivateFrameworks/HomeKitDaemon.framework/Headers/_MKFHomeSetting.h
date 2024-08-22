// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFHOMESETTING_H
#define _MKFHOMESETTING_H

@class MKFModel, NSString, NSUUID, NSDate;
@protocol MKFHomeSetting, MKFHomeSettingPrivateExtensions, MKFHome;


#import "MKFHomeSettingDatabaseID.h"
#import "_MKFHome.h"

@interface _MKFHomeSetting : MKFModel <MKFHomeSetting, MKFHomeSettingPrivateExtensions>



@property (readonly, copy, nonatomic) MKFHomeSettingDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _MKFHome *home;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfHomeSetting;


@end


#endif