// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFHIGHLIGHTBANNERTRACKER_H
#define SFHIGHLIGHTBANNERTRACKER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFHighlightBannerTracker : NSObject {
    NSMutableDictionary *_blockedHighlights;
    NSObject<OS_dispatch_queue> *_internalQueue;
}




+(id)sharedTracker;
-(id)init;
-(void)_saveOnInteralQueue;
-(void)blockBannerForHighlight:(id)arg0 ;
-(void)clear;
-(void)isBannerBlockedForHighlight:(id)arg0 completion:(id)arg1 ;
-(void)load;
-(void)unblockBannerForHighlight:(id)arg0 ;


@end


#endif