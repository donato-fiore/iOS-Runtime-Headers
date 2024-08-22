// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMEDIAPLAYBACKACTIONMODEL_H
#define HMDMEDIAPLAYBACKACTIONMODEL_H

@class NSSet, NSString, MPPlaybackArchive, NSNumber;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDActionModel.h"

@interface HMDMediaPlaybackActionModel : HMDActionModel <HMDBackingStoreModelObjectCDRepresentable>



@property (retain, nonatomic) NSSet *accessories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MPPlaybackArchive *encodedPlaybackArchive;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *profiles;
@property (retain, nonatomic) NSSet *services;
@property (retain, nonatomic) NSNumber *state;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *volume;


+(Class)cd_entityClass;
+(id)properties;
+(id)schemaHashRoot;
-(BOOL)validForStorage;
-(id)_profilesFromManagedObject:(id)arg0 ;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;
-(id)dependentUUIDs;
-(id)validate;
-(void)loadModelWithActionInformation:(id)arg0 ;


@end


#endif