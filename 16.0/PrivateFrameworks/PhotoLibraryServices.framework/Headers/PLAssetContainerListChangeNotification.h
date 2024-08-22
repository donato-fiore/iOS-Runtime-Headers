// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLASSETCONTAINERLISTCHANGENOTIFICATION_H
#define PLASSETCONTAINERLISTCHANGENOTIFICATION_H

@class NSDictionary;
@protocol PLAlbumContainer, PLAssetContainerList;


#import "PLContainerChangeNotification.h"

@interface PLAssetContainerListChangeNotification : PLContainerChangeNotification {
    NSDictionary *_userInfo;
}


@property (readonly, nonatomic) NSObject<PLAlbumContainer> *albumList;
@property (readonly, nonatomic) NSObject<PLAssetContainerList> *assetContainerList;


+(id)notificationWithContainerList:(id)arg0 snapshot:(id)arg1 changedContainers:(id)arg2 ;
-(id)_contentRelationshipName;
-(id)description;
-(id)name;
-(id)userInfo;


@end


#endif