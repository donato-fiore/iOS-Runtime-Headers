// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSASPENDINGCHANGES_H
#define MSASPENDINGCHANGES_H

@class NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MSASPendingChanges : NSObject

@property (retain, nonatomic) NSMutableSet *pendingAlbumChanges; // ivar: _pendingAlbumChanges
@property (retain, nonatomic) NSMutableDictionary *pendingAlbumGUIDToAssetCollections; // ivar: _pendingAlbumGUIDToAssetCollections
@property (retain, nonatomic) NSMutableSet *pendingAlbumGUIDsWithKeyValueChanges; // ivar: _pendingAlbumGUIDsWithKeyValueChanges
@property (retain, nonatomic) NSMutableSet *pendingAlbumGUIDsWithSharingInfoChanges; // ivar: _pendingAlbumGUIDsWithSharingInfoChanges


-(BOOL)hasPendingChanges;
-(id)initWithSyncedKeyValueChangesForAlbumGUIDS:(id)arg0 albumChanges:(id)arg1 accessControlChangesForAlbumGUIDS:(id)arg2 ;
-(void)addPendingAssetCollectionChanges:(id)arg0 forAlbumGUID:(id)arg1 ;
-(void)addPendingChangesForAlbumGUID:(id)arg0 ;
-(void)removePendingAssetCollection:(id)arg0 forAlbumGUID:(id)arg1 ;
-(void)removePendingChangesForAlbumGUID:(id)arg0 ;
-(void)removePendingKeyValueChangesForAlbumGUID:(id)arg0 ;
-(void)removePendingSharingInfoChangesForAlbumGUID:(id)arg0 ;


@end


#endif