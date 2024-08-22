// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPINLINEMEDIAPLAYBACKINFORMATION_H
#define LPINLINEMEDIAPLAYBACKINFORMATION_H

@class NSArray, NSString, NSURL;

#import <Foundation/Foundation.h>

#import "LPAudio.h"
#import "LPLyricExcerptMetadata.h"

@interface LPInlineMediaPlaybackInformation : NSObject

@property (retain, nonatomic) LPAudio *audio; // ivar: _audio
@property (readonly, nonatomic) BOOL isAvailableForAnonymousDownload;
@property (retain, nonatomic) LPLyricExcerptMetadata *lyricExcerpt; // ivar: _lyricExcerpt
@property (copy, nonatomic) NSArray *offers; // ivar: _offers
@property (copy, nonatomic) NSString *persistentIdentifier; // ivar: _persistentIdentifier
@property (copy, nonatomic) NSURL *previewURL; // ivar: _previewURL
@property (copy, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (copy, nonatomic) NSString *storefrontIdentifier; // ivar: _storefrontIdentifier
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(NSUInteger)availability;
-(id)initWithType:(NSUInteger)arg0 ;


@end


#endif