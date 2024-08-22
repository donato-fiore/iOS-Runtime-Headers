// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPAPPLEMUSICLYRICEXCERPTFETCHER_H
#define LPAPPLEMUSICLYRICEXCERPTFETCHER_H

@class NSOperation, MPStoreLyricsSnippetURLComponents;


#import "LPFetcher.h"

@interface LPAppleMusicLyricExcerptFetcher : LPFetcher {
    id *_completionHandler;
    NSOperation *_operation;
}


@property (retain, nonatomic) MPStoreLyricsSnippetURLComponents *lyricComponents; // ivar: _lyricComponents


-(id)init;
-(void)cancel;
-(void)completedWithLyrics:(id)arg0 ;
-(void)fetchWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif