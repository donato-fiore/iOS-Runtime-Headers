// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETCONTAINERCHANGENOTIFICATION_H
#define PLASSETCONTAINERCHANGENOTIFICATION_H

@class NSDictionary;
@protocol PLAlbumProtocol, PLAssetContainer;


#import "PLContainerChangeNotification.h"
#import "PLManagedObject.h"

@interface PLAssetContainerChangeNotification : PLContainerChangeNotification {
    BOOL _titleDidChange;
    BOOL _keyAssetDidChange;
    NSDictionary *_userInfo;
}


@property (readonly, nonatomic) NSObject<PLAlbumProtocol> *album;
@property (readonly, nonatomic) NSObject<PLAssetContainer> *assetContainer;
@property (readonly, nonatomic) PLManagedObject *container;
@property (readonly, nonatomic) BOOL keyAssetDidChange;
@property (readonly, nonatomic) BOOL titleDidChange;


+(id)notificationWithContainer:(id)arg0 snapshot:(id)arg1 changedAssets:(id)arg2 ;
-(BOOL)_getOldSet:(*id)arg0 newSet:(*id)arg1 ;
-(BOOL)hasDeletes;
-(id)_contentRelationshipName;
-(id)description;
-(id)name;
-(id)userInfo;
-(void)_calculateDiffs;
-(void)dealloc;


@end


#endif