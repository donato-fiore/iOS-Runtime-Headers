// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPITUNESMEDIAASSET_H
#define LPITUNESMEDIAASSET_H

@class MPStoreLyricsSnippetURLComponents, NSURL, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "LPFetcher.h"

@interface LPiTunesMediaAsset : NSObject {
    NSInteger _type;
    MPStoreLyricsSnippetURLComponents *_lyricComponents;
}


@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy, nonatomic) NSDictionary *colors; // ivar: _colors
@property (readonly, retain, nonatomic) LPFetcher *fetcher;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


-(id)initWithImageURL:(id)arg0 colors:(id)arg1 name:(id)arg2 ;
-(id)initWithName:(id)arg0 lyricComponents:(id)arg1 ;
-(id)initWithVideoURL:(id)arg0 name:(id)arg1 ;
-(id)metadata;


@end


#endif