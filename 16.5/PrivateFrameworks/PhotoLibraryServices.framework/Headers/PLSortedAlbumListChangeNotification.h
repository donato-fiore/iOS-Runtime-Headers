// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSORTEDALBUMLISTCHANGENOTIFICATION_H
#define PLSORTEDALBUMLISTCHANGENOTIFICATION_H



#import "PLAssetContainerListChangeNotification.h"
#import "PLSortedAlbumList.h"

@interface PLSortedAlbumListChangeNotification : PLAssetContainerListChangeNotification {
    PLSortedAlbumList *_albumList;
    PLAssetContainerListChangeNotification *_backingNotification;
}




+(id)notificationForDerivedObject:(id)arg0 priorChangeState:(id)arg1 forBackingObjectNotification:(id)arg2 ;
-(BOOL)_getOldSet:(*id)arg0 newSet:(*id)arg1 ;
-(BOOL)countDidChange;
-(BOOL)shouldReload;
-(id)_changedObjects;
-(id)albumList;
-(id)description;
-(id)init;
-(id)initWithSortedAlbumList:(id)arg0 albumListChangeNotification:(id)arg1 ;
-(id)object;


@end


#endif