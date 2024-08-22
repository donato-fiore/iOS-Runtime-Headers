// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIPLISTSHOWMEDIACOLLECTION_H
#define VUIPLISTSHOWMEDIACOLLECTION_H

@protocol VUIPlistMediaEntityImageLoadParamsCreating;


#import "VUIMediaCollection.h"
#import "VUIPlistMediaDatabaseShow.h"

@interface VUIPlistShowMediaCollection : VUIMediaCollection <VUIPlistMediaEntityImageLoadParamsCreating>



@property (retain, nonatomic) VUIPlistMediaDatabaseShow *databaseShow; // ivar: _databaseShow


-(id)_valueForPropertyDescriptor:(id)arg0 ;
-(id)coverArtImageIdentifier;
-(id)imageLoadParamsWithImageType:(NSUInteger)arg0 ;
-(id)initWithMediaLibrary:(id)arg0 databaseShow:(id)arg1 requestedProperties:(id)arg2 ;
-(id)initWithMediaLibrary:(id)arg0 identifier:(id)arg1 requestedProperties:(id)arg2 kind:(id)arg3 ;
-(id)mediaItemCount;
-(id)playedState;


@end


#endif