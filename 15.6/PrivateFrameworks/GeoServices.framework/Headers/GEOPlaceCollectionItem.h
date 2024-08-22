// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPLACECOLLECTIONITEM_H
#define GEOPLACECOLLECTIONITEM_H

@class NSString, NSArray, NSURL;

#import <Foundation/Foundation.h>

#import "GEOPDPlaceCollectionItem.h"
#import "GEOQuickLink.h"
#import "GEOMapItemIdentifier.h"

@interface GEOPlaceCollectionItem : NSObject {
    GEOPDPlaceCollectionItem *_placeCollectionItem;
}


@property (readonly, nonatomic) GEOQuickLink *appClip;
@property (readonly, nonatomic) BOOL disableAppClipFallback;
@property (readonly, nonatomic) NSString *itemDescription;
@property (readonly, nonatomic) NSString *itemHTMLDescription;
@property (readonly, nonatomic) GEOMapItemIdentifier *itemIdentifier;
@property (readonly, nonatomic) NSArray *photos;
@property (readonly, nonatomic) NSString *reviewText;
@property (readonly, nonatomic) NSURL *reviewUrl;
@property (readonly, nonatomic) BOOL supportsPhotoFallback;


-(id)description;
-(id)initWithPlaceCollectionItem:(id)arg0 ;


@end


#endif