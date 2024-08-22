// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOSHARINGMANAGER_H
#define PUPHOTOSHARINGMANAGER_H

@class PLProgressView, NSTimer, NSMutableArray;
@protocol PLPublishingAgentDelegate;

#import <Foundation/Foundation.h>


@interface PUPhotoSharingManager : NSObject <PLPublishingAgentDelegate>

 {
    PLProgressView *_publishingProgressView;
    NSTimer *_publishingProgressTimer;
    NSMutableArray *_publishingAgents;
    NSInteger _videoRemakingCount;
    NSInteger _appSuspensionCount;
    NSInteger _networkPromptCount;
    NSUInteger _backgroundTaskIdentifier;
}


@property (readonly, nonatomic) PLProgressView *publishingProgressView;
@property (nonatomic, getter=isRemaking) BOOL remaking;


+(id)sharedInstance;
-(BOOL)prepareForDismissingForced:(BOOL)arg0 ;
-(id)_currentPublishingAgent;
-(void)_addPublishingAgentIfNeeded:(id)arg0 ;
-(void)_cleanUpPublishingProgressView;
-(void)_removePublishingAgent:(id)arg0 ;
-(void)_schedulePublishingProgressViewUpdate;
-(void)_setDelaysAppSuspend:(BOOL)arg0 ;
-(void)_setFlag:(BOOL)arg0 forReferenceCounter:(*NSInteger)arg1 performIfChanged:(id)arg2 ;
-(void)_setNetworkPromptShowing:(BOOL)arg0 ;
-(void)_updatePublishingProgressView:(id)arg0 ;
-(void)cancelPublishing;
-(void)dealloc;
-(void)publishingAgentCancelButtonClicked:(id)arg0 ;
-(void)publishingAgentDidBeginPublishing:(id)arg0 ;
-(void)publishingAgentDidEndPublishing:(id)arg0 error:(id)arg1 ;
-(void)publishingAgentDidEndRemaking:(id)arg0 didSucceed:(BOOL)arg1 ;
-(void)publishingAgentDidStartRemaking:(id)arg0 ;
-(void)publishingAgentDoneButtonClicked:(id)arg0 ;
-(void)publishingAgentWillBeDisplayed:(id)arg0 ;


@end


#endif