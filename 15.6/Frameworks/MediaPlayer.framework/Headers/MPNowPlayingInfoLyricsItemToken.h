// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPNOWPLAYINGINFOLYRICSITEMTOKEN_H
#define MPNOWPLAYINGINFOLYRICSITEMTOKEN_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface MPNowPlayingInfoLyricsItemToken : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) *void mediaRemoteLyricsItemToken; // ivar: _mediaRemoteLyricsItemToken
@property (readonly, nonatomic) NSDictionary *userInfo;


-(id)initWithIdentifier:(id)arg0 userInfo:(id)arg1 ;
-(id)initWithMediaRemoteLyricsItemToken:(*void)arg0 ;
-(void)dealloc;


@end


#endif