// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPTPASSETHANDLE_H
#define PLPTPASSETHANDLE_H

@class NSManagedObjectID, NSString, NSSet;

#import <Foundation/Foundation.h>


@interface PLPTPAssetHandle : NSObject

@property (readonly, copy, nonatomic) NSManagedObjectID *assetID; // ivar: _assetID
@property (readonly, nonatomic) NSString *auxiliaryResourceFilenameMarker;
@property (readonly, nonatomic) BOOL requiresConversion; // ivar: _requiresConversion
@property (readonly, copy, nonatomic) NSSet *siblingAssetHandleTypes; // ivar: _siblingAssetHandleTypes
@property (readonly, copy, nonatomic) NSManagedObjectID *sidecarID; // ivar: _sidecarID
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(BOOL)hasSiblingAssetWithAssetHandleType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)assetHandleBySettingRequiresConversion;
-(id)assetHandleBySettingSiblingAssetHandleTypes:(id)arg0 ;
-(id)description;
-(id)initWithType:(NSInteger)arg0 assetID:(id)arg1 sidecarID:(id)arg2 requiresConversion:(BOOL)arg3 ;
-(id)initWithType:(NSInteger)arg0 assetID:(id)arg1 sidecarID:(id)arg2 requiresConversion:(BOOL)arg3 siblingAssetHandleTypes:(id)arg4 ;


@end


#endif