// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIPLISTMEDIAITEM_H
#define VUIPLISTMEDIAITEM_H

@protocol VUIPlistMediaEntityImageLoadParamsCreating;


#import "VUIMediaItem.h"
#import "VUIPlistMediaDatabaseItem.h"

@interface VUIPlistMediaItem : VUIMediaItem <VUIPlistMediaEntityImageLoadParamsCreating>



@property (retain, nonatomic) VUIPlistMediaDatabaseItem *databaseItem; // ivar: _databaseItem


-(id)_valueForPropertyDescriptor:(id)arg0 ;
-(id)assetType;
-(id)coverArtImageIdentifier;
-(id)imageLoadParamsWithImageType:(NSUInteger)arg0 ;
-(id)initWithMediaLibrary:(id)arg0 databaseItem:(id)arg1 requestedProperties:(id)arg2 ;
-(id)initWithMediaLibrary:(id)arg0 identifier:(id)arg1 requestedProperties:(id)arg2 kind:(id)arg3 ;
-(id)isLocal;
-(id)playedState;
-(id)previewFrameImageIdentifier;
-(id)seasonIdentifier;
-(id)seasonNumber;
-(id)seasonTitle;
-(id)showIdentifier;
-(id)showTitle;


@end


#endif