// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVMULTIGETWITHFALLBACKTASKGROUP_H
#define COREDAVMULTIGETWITHFALLBACKTASKGROUP_H

@class NSMutableSet, NSString, NSSet, NSError;
@protocol CoreDAVContainerMultiGetSubmittable, CoreDAVAccountInfoProvider, CoreDAVTaskManager;


#import "CoreDAVTaskGroup.h"
#import "CoreDAVContainerMultiGetTask.h"

@interface CoreDAVMultiGetWithFallbackTaskGroup : CoreDAVTaskGroup <CoreDAVContainerMultiGetSubmittable>

 {
    BOOL _usingMultiGet;
    CoreDAVContainerMultiGetTask *_multiGetTask;
    id *_getBlock;
    NSMutableSet *_urls;
    NSMutableSet *_parsedContents;
}


@property (nonatomic) NSObject<CoreDAVAccountInfoProvider> *accountInfoProvider;
@property (copy, nonatomic) id *completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *deletedURLs;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *missingURLs;
@property (readonly, nonatomic) NSSet *parsedContents;
@property (nonatomic) BOOL shouldIgnoreResponseErrors; // ivar: _shouldIgnoreResponseErrors
@property (readonly) Class superclass;
@property (nonatomic) NSObject<CoreDAVTaskManager> *taskManager;
@property (nonatomic) CGFloat timeoutInterval;


// -(id)initWithURLs:(id)arg0 multiGetBlock:(id)arg1 getBlock:(unk)arg2 accountInfoProvider:(id)arg3 taskManager:(unk)arg4  ;
-(void)_configureAndSubmitTask:(id)arg0 ;
-(void)_fetchOneItem;
-(void)_switchToSingleGetMode;
-(void)startTaskGroup;


@end


#endif