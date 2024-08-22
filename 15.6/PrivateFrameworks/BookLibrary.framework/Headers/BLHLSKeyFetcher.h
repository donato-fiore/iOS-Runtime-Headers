// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLHLSKEYFETCHER_H
#define BLHLSKEYFETCHER_H


#import <Foundation/Foundation.h>


@interface BLHLSKeyFetcher : NSObject

@property (nonatomic) BOOL ignoreCache; // ivar: _ignoreCache


+(id)sharedInstance;
-(id)fetchOfflineKeyForMediaItem:(id)arg0 identity:(id)arg1 completion:(id)arg2 ;
-(id)fetchOnlineKeyForMediaItem:(id)arg0 loadingRequest:(id)arg1 ;
-(id)init;


@end


#endif