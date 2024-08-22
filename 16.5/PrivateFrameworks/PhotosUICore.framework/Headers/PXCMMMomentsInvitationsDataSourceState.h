// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMMOMENTSINVITATIONSDATASOURCESTATE_H
#define PXCMMMOMENTSINVITATIONSDATASOURCESTATE_H

@class PHFetchResult, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXCMMMomentsInvitationsDataSourceState : NSObject <NSCopying>



@property (readonly, nonatomic) PHFetchResult *assetCollections; // ivar: _assetCollections
@property (readonly, nonatomic) NSDictionary *invitationsByAssetCollectionObjectID; // ivar: _invitationsByAssetCollectionObjectID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAssetCollections:(id)arg0 invitationsByAssetCollectionObjectID:(id)arg1 ;
-(id)stateUpdatedWithChange:(id)arg0 changeDetails:(*id)arg1 ;


@end


#endif