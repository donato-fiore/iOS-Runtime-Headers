// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCPLAYBACKSESSIONARCHIVE_H
#define _MPCPLAYBACKSESSIONARCHIVE_H

@class MSVSegmentedCodingPackage, UIImage, MPNowPlayingContentItem, NSString, NSDate;



@interface _MPCPlaybackSessionArchive : MSVSegmentedCodingPackage

@property (copy, nonatomic) UIImage *artworkImage; // ivar: _artworkImage
@property (copy, nonatomic) MPNowPlayingContentItem *contentItem; // ivar: _contentItem
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate


+(id)packageTypeIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)saveWithError:(*id)arg0 ;
-(BOOL)writeWithError:(*id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 identifier:(id)arg1 ;


@end


#endif