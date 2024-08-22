// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATARRECORDRENDERING_H
#define AVTAVATARRECORDRENDERING_H


#import <Foundation/Foundation.h>


@interface AVTAvatarRecordRendering : NSObject



+(id)avatarForRecord:(id)arg0 ;
+(id)avatarForRecord:(id)arg0 usageIntent:(NSUInteger)arg1 ;
+(id)memojiForRecord:(id)arg0 ;
+(id)memojiForRecord:(id)arg0 usageIntent:(NSUInteger)arg1 ;
// +(void)_castRecord:(id)arg0 andDoRecordHandlingBlock:(id)arg1 puppetHandlingBlock:(unk)arg2  ;
+(void)preloadAllAvatarsWithStore:(id)arg0 completionHandler:(id)arg1 ;
+(void)preloadAllAvatarsWithStore:(id)arg0 environment:(id)arg1 completionHandler:(id)arg2 ;
+(void)preloadAvatarsWithFetchRequests:(id)arg0 store:(id)arg1 environment:(id)arg2 completionHandler:(id)arg3 ;
+(void)preloadAvatarsWithIdentifiers:(id)arg0 store:(id)arg1 completionHandler:(id)arg2 ;
+(void)preloadAvatarsWithIdentifiers:(id)arg0 store:(id)arg1 environment:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif