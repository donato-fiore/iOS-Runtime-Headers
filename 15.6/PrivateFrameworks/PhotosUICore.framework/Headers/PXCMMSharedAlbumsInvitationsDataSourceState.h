// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMSHAREDALBUMSINVITATIONSDATASOURCESTATE_H
#define PXCMMSHAREDALBUMSINVITATIONSDATASOURCESTATE_H

@class NSDictionary, PHFetchResult;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXCMMSharedAlbumsInvitationsDataSourceState : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *invitationsBySharedAlbumObjectID; // ivar: _invitationsBySharedAlbumObjectID
@property (readonly, nonatomic) PHFetchResult *sharedAlbums; // ivar: _sharedAlbums


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSharedAlbums:(id)arg0 invitationsBySharedAlbumObjectID:(id)arg1 ;
-(id)stateUpdatedWithChange:(id)arg0 changeDetails:(*id)arg1 ;


@end


#endif