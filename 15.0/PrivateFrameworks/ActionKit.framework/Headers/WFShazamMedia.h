// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSHAZAMMEDIA_H
#define WFSHAZAMMEDIA_H

@class NSString, NSURL;
@protocol WFNaming, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WFShazamMedia : NSObject <WFNaming, NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *appleMusicID; // ivar: _appleMusicID
@property (readonly, copy, nonatomic) NSURL *appleMusicURL; // ivar: _appleMusicURL
@property (readonly, copy, nonatomic) NSString *artist; // ivar: _artist
@property (readonly, copy, nonatomic) NSURL *artworkURL; // ivar: _artworkURL
@property (readonly, nonatomic) BOOL isExplicit; // ivar: _isExplicit
@property (readonly, copy, nonatomic) NSString *lyricsSnippet; // ivar: _lyricsSnippet
@property (readonly, copy, nonatomic) NSString *lyricsSnippetSynced; // ivar: _lyricsSnippetSynced
@property (readonly, copy, nonatomic) NSURL *shazamURL; // ivar: _shazamURL
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSURL *videoURL; // ivar: _videoURL
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaItem:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif