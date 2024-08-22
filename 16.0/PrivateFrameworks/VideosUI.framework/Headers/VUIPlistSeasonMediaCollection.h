// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIPLISTSEASONMEDIACOLLECTION_H
#define VUIPLISTSEASONMEDIACOLLECTION_H

@protocol VUIPlistMediaEntityImageLoadParamsCreating;


#import "VUIMediaCollection.h"
#import "VUIPlistMediaDatabaseSeason.h"

@interface VUIPlistSeasonMediaCollection : VUIMediaCollection <VUIPlistMediaEntityImageLoadParamsCreating>



@property (retain, nonatomic) VUIPlistMediaDatabaseSeason *databaseSeason; // ivar: _databaseSeason


-(id)_valueForPropertyDescriptor:(id)arg0 ;
-(id)coverArtImageIdentifier;
-(id)imageLoadParamsWithImageType:(NSUInteger)arg0 ;
-(id)initWithMediaLibrary:(id)arg0 databaseSeason:(id)arg1 requestedProperties:(id)arg2 ;
-(id)initWithMediaLibrary:(id)arg0 identifier:(id)arg1 requestedProperties:(id)arg2 kind:(id)arg3 ;
-(id)mediaItemCount;
-(id)playedState;
-(id)seasonNumber;
-(id)showIdentifier;
-(id)showTitle;


@end


#endif