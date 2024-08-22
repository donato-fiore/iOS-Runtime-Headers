// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOMAPITEMSTORAGENOTIFICATIONTRAMPOLINE_H
#define _GEOMAPITEMSTORAGENOTIFICATIONTRAMPOLINE_H

@protocol GEOMapItem, NSObject;

#import <Foundation/Foundation.h>

#import "GEOMapItemStorage.h"

@interface _GEOMapItemStorageNotificationTrampoline : NSObject {
    id<GEOMapItem> *_mapItem;
    GEOMapItemStorage *_storage;
    id<NSObject> *_notificationToken;
}




-(id)initWithMapItem:(id)arg0 mapItemStorage:(id)arg1 ;
-(void)dealloc;


@end


#endif