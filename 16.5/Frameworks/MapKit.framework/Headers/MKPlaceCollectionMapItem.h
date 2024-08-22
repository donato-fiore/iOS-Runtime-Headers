// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPLACECOLLECTIONMAPITEM_H
#define MKPLACECOLLECTIONMAPITEM_H

@class GEOQuickLink, GEOPlaceCollectionItem;

#import <Foundation/Foundation.h>

#import "MKMapItem.h"

@interface MKPlaceCollectionMapItem : NSObject

@property (readonly, nonatomic) GEOQuickLink *appClip;
@property (readonly, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (readonly, nonatomic) GEOPlaceCollectionItem *placeCollectionItem; // ivar: _placeCollectionItem


-(id)description;
-(id)initWithMapItem:(id)arg0 placeCollectionItem:(id)arg1 ;


@end


#endif