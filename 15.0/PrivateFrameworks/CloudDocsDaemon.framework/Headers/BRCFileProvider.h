// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCFILEPROVIDER_H
#define BRCFILEPROVIDER_H

@class NSURL, NSOperationQueue, NSMutableDictionary, NSString;
@protocol NSFileProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "brc_task_tracker.h"
#import "BRCAccountSession.h"

@interface BRCFileProvider : NSObject <NSFileProvider>

 {
    NSURL *_url;
    NSOperationQueue *_queue;
    NSMutableDictionary *_presentersIDsByKey;
    NSObject<OS_dispatch_queue> *_privQueue;
    brc_task_tracker *_tracker;
}


@property (readonly, copy) NSString *_fileReactorID;
@property (readonly) NSOperationQueue *_providedItemsOperationQueue;
@property (readonly, copy) NSURL *_providedItemsURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BRCAccountSession *session; // ivar: _session
@property (readonly) Class superclass;


+(id)prettyNameForFilePresenterID:(id)arg0 ;
-(id)_keyForURL:(id)arg0 ;
-(id)_keyForURL:(id)arg0 andID:(id)arg1 ;
-(id)_pathForKey:(id)arg0 ;
-(id)initWithURL:(id)arg0 name:(id)arg1 ;
-(void)_provideItemAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)_providedItemAtURL:(id)arg0 didGainPresenterWithID:(id)arg1 ;
-(void)_providedItemAtURL:(id)arg0 didLosePresenterWithID:(id)arg1 ;
-(void)_providedItemAtURL:(id)arg0 withPresenterWithID:(id)arg1 didMoveToURL:(id)arg2 ;
-(void)_registerPresenterForItemAtURL:(id)arg0 key:(id)arg1 name:(id)arg2 session:(id)arg3 ;
-(void)_unregisterPresenterForKey:(id)arg0 ;
-(void)dumpToContext:(id)arg0 ;
-(void)resume;
-(void)suspend;


@end


#endif