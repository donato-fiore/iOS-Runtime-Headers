// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPCONNECTIONSPASTEBOARDSOURCE_H
#define PPCONNECTIONSPASTEBOARDSOURCE_H

@class _PASLock, NSOperationQueue, NSLocale, NSString;
@protocol PPConnectionsLocationSource, OS_dispatch_semaphore;


#import "PPConnectionsSource.h"

@interface PPConnectionsPasteboardSource : PPConnectionsSource <PPConnectionsLocationSource>

 {
    NSUInteger _pasteboardNotificationState;
    _PASLock *_lock;
    id *_pasteboardObserver;
    NSObject<OS_dispatch_semaphore> *_init_sem;
    NSOperationQueue *_pbQueue;
    NSLocale *_testLocale;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_mostRecentPasteboardItem;
-(id)addressPasteboardTextItemFromNotification:(BOOL)arg0 ;
-(id)fetchedPasteboardItem;
-(id)identifier;
-(id)init;
-(id)locationItemsWithCriteria:(id)arg0 earliest:(id)arg1 latest:(id)arg2 limit:(NSUInteger)arg3 consumer:(NSUInteger)arg4 explanationSet:(id)arg5 ;
-(id)supportedSemanticTags;
-(id)validUTTypes;
-(void)_setMostRecentPasteboardItem:(id)arg0 ;
-(void)dealloc;
-(void)refreshMostRecentPasteboardItemFromNotification:(BOOL)arg0 explanationSet:(id)arg1 ;
-(void)setPasteboardTextForTesting:(id)arg0 ;
-(void)setTestLocale:(id)arg0 ;
-(void)unsetPasteboardTextForTestingAndClearCache;


@end


#endif