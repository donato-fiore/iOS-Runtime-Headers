// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCPRESENTERCONTEXT_H
#define ASCPRESENTERCONTEXT_H


#import <Foundation/Foundation.h>

#import "ASCAppOfferStateCenter.h"
#import "ASCArtworkFetcher.h"
#import "ASCLockupFetcher.h"

@interface ASCPresenterContext : NSObject

@property (readonly, nonatomic) ASCAppOfferStateCenter *appOfferStateCenter; // ivar: _appOfferStateCenter
@property (readonly, nonatomic) ASCArtworkFetcher *artworkFetcher; // ivar: _artworkFetcher
@property (readonly, nonatomic) ASCLockupFetcher *lockupFetcher; // ivar: _lockupFetcher


+(id)sharedContext;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithArtworkFetcher:(id)arg0 lockupFetcher:(id)arg1 appOfferStateCenter:(id)arg2 ;


@end


#endif