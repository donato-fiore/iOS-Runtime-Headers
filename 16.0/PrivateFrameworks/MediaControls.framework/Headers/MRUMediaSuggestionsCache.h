// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUMEDIASUGGESTIONSCACHE_H
#define MRUMEDIASUGGESTIONSCACHE_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface MRUMediaSuggestionsCache : NSObject

@property (retain, nonatomic) NSCache *imageCache; // ivar: _imageCache


+(id)sharedCache;
-(id)artworkForMediaSuggestion:(id)arg0 ;
-(id)init;


@end


#endif