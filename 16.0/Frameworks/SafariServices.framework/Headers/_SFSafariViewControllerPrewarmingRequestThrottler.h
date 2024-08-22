// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFSAFARIVIEWCONTROLLERPREWARMINGREQUESTTHROTTLER_H
#define _SFSAFARIVIEWCONTROLLERPREWARMINGREQUESTTHROTTLER_H

@class NSHashTable, NSMutableSet, NSMutableDictionary, NSTimer;

#import <Foundation/Foundation.h>


@interface _SFSafariViewControllerPrewarmingRequestThrottler : NSObject {
    NSHashTable *_requestedTokens;
    NSHashTable *_prewarmedTokens;
    NSMutableSet *_prewarmedURLs;
    NSMutableDictionary *_tokensByID;
    NSTimer *_requestDelayTimer;
    BOOL _suspended;
}


@property (copy, nonatomic) id *connectionHandler; // ivar: _connectionHandler
@property (nonatomic) NSUInteger maximumValidConnectionCount; // ivar: _maximumValidConnectionCount
@property (nonatomic) CGFloat minimumRequestDelay; // ivar: _minimumRequestDelay


-(id)_URLsToPrewarmForToken:(id)arg0 ;
-(id)_nextTokenToPrewarm;
-(id)_prewarmedURLsWithValidTokens;
-(id)init;
-(void)_didPartiallyPrewarmToken:(id)arg0 ;
-(void)_didPrewarmToken:(id)arg0 ;
-(void)_performNextRequest;
-(void)_prewarmURLs:(id)arg0 ;
-(void)_startRequestTimer;
-(void)_stopRequestTimer;
-(void)dealloc;
-(void)invalidateTokenWithID:(NSUInteger)arg0 ;
-(void)requestToken:(id)arg0 ;
-(void)resume;
-(void)suspend;


@end


#endif