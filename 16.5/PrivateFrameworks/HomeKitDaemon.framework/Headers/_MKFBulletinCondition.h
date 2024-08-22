// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFBULLETINCONDITION_H
#define _MKFBULLETINCONDITION_H

@class MKFModel, NSString, NSUUID, NSDate;
@protocol MKFBulletinCondition, MKFBulletinConditionPrivateExtensions, MKFBulletinRegistration, MKFHome;


#import "_MKFBulletinRegistration.h"
#import "MKFBulletinConditionDatabaseID.h"

@interface _MKFBulletinCondition : MKFModel <MKFBulletinCondition, MKFBulletinConditionPrivateExtensions>



@property (retain, nonatomic) _MKFBulletinRegistration *bulletinRegistration;
@property (readonly, retain, nonatomic) NSObject<MKFBulletinRegistration> *bulletinRegistration;
@property (readonly, copy, nonatomic) MKFBulletinConditionDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<MKFHome> *home;
@property (copy, nonatomic) NSUUID *modelID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfBulletinCondition;


@end


#endif