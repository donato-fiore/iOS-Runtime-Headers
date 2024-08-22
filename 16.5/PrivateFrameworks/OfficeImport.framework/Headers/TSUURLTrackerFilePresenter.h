// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUURLTRACKERFILEPRESENTER_H
#define TSUURLTRACKERFILEPRESENTER_H

@class NSURL, NSData, NSError, NSString, NSSet, NSOperationQueue;
@protocol NSFilePresenter, OS_dispatch_queue, TSUURLTrackerDelegate;

#import <Foundation/Foundation.h>


@interface TSUURLTrackerFilePresenter : NSObject <NSFilePresenter>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _hasStarted;
    NSURL *_URLIfAvailable;
    NSData *_bookmarkDataIfAvailable;
    NSError *_latestError;
    id<TSUURLTrackerDelegate> *_delegate;
}


@property (readonly) NSData *bookmarkData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue; // ivar: _presentedItemOperationQueue
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;


-(id)URLAndReturnError:(*id)arg0 ;
-(id)_URLAndReturnError:(*id)arg0 ;
-(id)_bookmarkDataAndReturnError:(*id)arg0 ;
-(id)bookmarkDataAndReturnError:(*id)arg0 ;
-(id)init;
-(id)initWithURL:(id)arg0 bookmarkData:(id)arg1 delegate:(id)arg2 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg0 ;
-(void)pause;
-(void)presentedItemDidChangeUbiquityAttributes:(id)arg0 ;
-(void)presentedItemDidMoveToURL:(id)arg0 ;
-(void)relinquishPresentedItemToWriter:(id)arg0 ;
-(void)startOrResume;
-(void)stop;


@end


#endif