// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIACHAPTER_H
#define MPMEDIACHAPTER_H


#import <Foundation/Foundation.h>

#import "MPMediaLibraryArtworkDataSource.h"
#import "MPMediaLibraryArtworkRequest.h"

@interface MPMediaChapter : NSObject

@property (weak, nonatomic) MPMediaLibraryArtworkDataSource *artworkDataSource; // ivar: _artworkDataSource
@property (retain, nonatomic) MPMediaLibraryArtworkRequest *artworkRequest; // ivar: _artworkRequest
@property (nonatomic) NSInteger chapterType; // ivar: _chapterType
@property (nonatomic) NSUInteger indexInChaptersWithAnyType; // ivar: _indexInChaptersWithAnyType
@property (nonatomic) NSUInteger indexInChaptersWithSameType; // ivar: _indexInChaptersWithSameType
@property (nonatomic) CGFloat playbackDuration; // ivar: _playbackDuration
@property (nonatomic) CGFloat playbackTime; // ivar: _playbackTime
@property (retain, nonatomic) id *value; // ivar: _value
@property (copy, nonatomic) id *valueLoader; // ivar: _valueLoader


-(CGFloat)duration;
-(NSInteger)_sortByChapterIndex:(id)arg0 ;
-(id)artworkCatalog;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)title;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif