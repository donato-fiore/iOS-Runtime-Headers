// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTLIGHTSANDSIRENSREPLYINFOCACHE_H
#define BLTLIGHTSANDSIRENSREPLYINFOCACHE_H

@class NSMutableDictionary, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BLTLightsAndSirensReplyInfoCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *localReplyInfo; // ivar: _localReplyInfo
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSDate *timeToCheck; // ivar: _timeToCheck


+(id)sharedReplyCache;
-(BOOL)_isTimeToCheck;
-(id)_firstReplyInfoWithNoDidPlayStateWithReplyToken:(id)arg0 ;
-(id)_firstReplyInfoWithNoReplyWithReplyToken:(id)arg0 ;
-(id)cacheDidPlayLightsAndSirens:(NSUInteger)arg0 withReplyToken:(id)arg1 ;
-(id)init;
-(void)_addReplyInfo:(id)arg0 forReplyToken:(id)arg1 ;
-(void)_checkCache;
-(void)_setNextTimeToCheck;
// -(void)cacheReply:(id)arg0 withSectionID:(unk)arg1 bulletinID:(id)arg2 publicationDate:(id)arg3 replyToken:(id)arg4  ;
-(void)purgeReplyInfo:(id)arg0 withReplyToken:(id)arg1 ;


@end


#endif